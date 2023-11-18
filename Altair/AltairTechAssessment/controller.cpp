#include "controller.h"
#include "model.h"
#include <QMessageBox>

model *m;
std::vector<std::vector<std::pair<double, double>>> matrixA;
std::vector<std::vector<std::pair<double, double>>> matrixB;
controller::controller()
{
    model *m = new model();
}

int controller::getItemValue(int row,int col){
    return m->floydsNumber(row+1,col+1,1,1,1);
}

// Function to multiply two matrices of complex numbers
std::vector<std::vector<std::pair<double, double>>> controller::multiplyMatricesControl() {
    return m->multiplyMatrices(matrixA,matrixB);
}

// Function to validate the numbers in the table
bool controller::validateMatrix(QTableWidget* tblMatrixA, QTableWidget* tblMatrixB){
    matrixA.clear();
    matrixB.clear();
    // Read values from tblMatrixA
    for(int i = 0; i < tblMatrixA->rowCount(); ++i)
    {
        std::vector<std::pair<double, double>> rowA;
        for(int j = 0; j < tblMatrixA->columnCount(); j=j+2)
        {
            QTableWidgetItem *itemA = tblMatrixA->item(i, j);
            QTableWidgetItem *itemImag = tblMatrixA->item(i, j+1);
            if(!itemA || !itemImag)
            {
                return false;
            }
            bool ok;
            bool good;
            double valueA = itemA->text().toDouble(&ok);
            double imagA = itemImag->text().toDouble(&good);
            if(!ok || !good)
            {
                return false;
            }
            rowA.push_back(std::make_pair(valueA, imagA));
        }
        matrixA.push_back(rowA);
    }

    // Read values from tblMatrixB
    for(int i = 0; i < tblMatrixB->rowCount(); ++i)
    {
        std::vector<std::pair<double, double>> rowB;
        for(int j = 0; j < tblMatrixB->columnCount(); j=j+2)
        {
            QTableWidgetItem *itemB = tblMatrixB->item(i, j);
            QTableWidgetItem *itemImag = tblMatrixB->item(i, j+1);
            if(!itemB || !itemImag)
            {
                return false;
            }
            bool ok;
            bool good;
            double valueB = itemB->text().toDouble(&ok);
            double imagB = itemImag->text().toDouble(&good);
            if(!ok)
            {
                // Show error message if the value is not a number
                return false;
            }
            rowB.push_back(std::make_pair(valueB, imagB));
        }
        matrixB.push_back(rowB);
    }
    return true;
}
