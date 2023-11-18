#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "controller.h"
#include <QMessageBox>

controller *crtl = new controller();

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Create a new QStatusBar
    QStatusBar *statusBar = new QStatusBar(this);

    // Set the status bar on the main window
    this->setStatusBar(statusBar);

    // Show a message on the status bar
    statusBar->showMessage("Status Bar");


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnMatrix_clicked()
{
    if (crtl->validateMatrix(ui->tblMatrixA,ui->tblMatrixB)){
        std::vector<std::vector<std::pair<double, double>>> result = crtl->multiplyMatricesControl();
        QString resultStr;
        for (const auto &row : result) {
            for (const auto &complex : row) {
                resultStr += "(" + QString::number(complex.first) + ", " + QString::number(complex.second) + ") ";
            }
            resultStr += "\n";
        }
        QMessageBox::information(this, "Result", resultStr);
    }else{
       QMessageBox::critical(this, "Error", "Invalid input in matrices");
        return;
    }

}



void MainWindow::on_btnFloyd_clicked()
{
    int row,col,result;
    row = ui->spnRow->value();
    col = ui->spnColumn->value();
    result = crtl->getItemValue(row,col);
    if (result > -1){
        ui->edtItem->setText(QString::number(result));
    } else {
        ui->edtItem->setText("Row and column invalid");
    }
}

