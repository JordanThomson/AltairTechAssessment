#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //Constructor
    MainWindow(QWidget *parent = nullptr);

    // Destructor
    ~MainWindow();

private slots:
    // n click event for matrix button
    void on_btnMatrix_clicked();

    // On click even for Floyd button
    void on_btnFloyd_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
