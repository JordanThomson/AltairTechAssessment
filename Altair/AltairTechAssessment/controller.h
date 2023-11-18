#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "qtablewidget.h"
#include <QMainWindow>

class controller
{
public:
    // Constructor
    controller();

    //Destructor
    ~controller();

    // Function to get the resulting Matrix
    std::vector<std::vector<std::pair<double, double>>> multiplyMatricesControl();

    // Function to validate the numbers in the table
    bool validateMatrix(QTableWidget* tblMatrixA, QTableWidget* tblMatrixB);

    // Function to get Floyds Number from the model class
    int getItemValue(int row, int col);
};

#endif // CONTROLLER_H
