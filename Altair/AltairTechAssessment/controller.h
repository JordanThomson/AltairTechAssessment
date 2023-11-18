#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "qtablewidget.h"
#include <QMainWindow>

class controller
{
public:
    controller();
    // Function to multiply two matrices of complex numbers
    std::vector<std::vector<std::pair<double, double>>> multiplyMatricesControl();
    bool validateMatrix(QTableWidget* tblMatrixA, QTableWidget* tblMatrixB);
    int getItemValue(int row, int col);
};

#endif // CONTROLLER_H
