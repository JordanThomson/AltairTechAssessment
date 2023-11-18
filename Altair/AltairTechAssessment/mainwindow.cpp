/* This is the view part of the MVC design pattern
 * This will handle the GUI and the user will first request
 * an operation from the Controller class and the Controller class
 * will display the results to this GUI class
*/
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "controller.h"
#include <QMessageBox>

// Create controller object
controller *crtl = new controller();
// Create Status Bar
QStatusBar *statusBar;

// Constructor for MainWindow class(View class)
// Main Menu is hard coded onto the UI file so no need
// for creating a main menu.
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Create a new QStatusBar
    QStatusBar *statusBar = new QStatusBar(this);

    // Set the status bar on the main window
    this->setStatusBar(statusBar);

}

// Destructor so no memory leaks
MainWindow::~MainWindow()
{
    delete ui;
}

// Function that handles the click event of the btnMatrix button
// This function will calculate the resulting matrix and display it or
// it will display an error message
void MainWindow::on_btnMatrix_clicked()
{
    // Update the status bar message
    statusBar()->showMessage("Matrix Multiplication");

    // Check with the controller class whether the matrixs' are valid
    if (crtl->validateMatrix(ui->tblMatrixA,ui->tblMatrixB)){

        // Call the function to calculate the resulting matrix
        std::vector<std::vector<std::pair<double, double>>> result = crtl->multiplyMatricesControl();

        // Insert resulting matrix into the table
        for (int i = 0; i < result.size(); ++i) {
            for (int j = 0; j < result[i].size(); ++j) {
                // Create new items for the real and imaginary parts
                QTableWidgetItem *realItem = new QTableWidgetItem(QString::number(result[i][j].first));
                QTableWidgetItem *imagItem = new QTableWidgetItem(QString::number(result[i][j].second));

                // Add the items to the table
                ui->tblResultMatrix->setItem(i, j*2, realItem);
                ui->tblResultMatrix->setItem(i, j*2+1, imagItem);
            }
        }
    }else{
        // User has either left something null or a non double type such as a string
       QMessageBox::critical(this, "Error", "Invalid input in matrices");
        return;
    }

}


// Function that handles the click event of the btnFloyd button
// This function will calculate the resulting floyd number and display
// If the user enters an invalid row or column, the GUI will display that
// the combination of the row and coloumn is incorrect
void MainWindow::on_btnFloyd_clicked()
{
    // Update status bar message
    statusBar()->showMessage("Floyds Number");

    // Declare and assign variables
    int row,col,result;
    // Spin edits used to minimize error
    row = ui->spnRow->value();
    col = ui->spnColumn->value();

    // Calculate Floyds Number
    result = crtl->getItemValue(row,col);

    // Checks whether resulting number is valid or not
    if (result > -1){
        ui->edtItem->setText(QString::number(result));
    } else {
        ui->edtItem->setText("Row and column invalid");
    }
}

