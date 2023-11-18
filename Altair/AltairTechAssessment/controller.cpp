/* This will be the controller class of the MVC design pattern
 * This class will mainly have error checking and will communicate with
 * the Model class to calculate answers and will then return these answers
 * to the View class
 */

#include "controller.h"
#include "model.h"
#include <QMessageBox>

// Create model class and create the Matrices
model *m;
std::vector<std::vector<std::pair<double, double>>> matrixA;
std::vector<std::vector<std::pair<double, double>>> matrixB;

// Constructor for controller
controller::controller()
{
    // Call constructor for Model Class
    model *m = new model();
}

// Destructor for controller to prevent memory leaks
controller::~controller()
{
    delete m;
    m = nullptr;
}

// Function to get Floyds Number from the model class
int controller::getItemValue(int row,int col){
    return m->floydsNumber(row+1,col+1,1,1,1);
}

// Function to get the resulting Matrix
std::vector<std::vector<std::pair<double, double>>> controller::multiplyMatricesControl() {
    return m->multiplyMatrices(matrixA,matrixB);
}

// Function to validate the numbers in the table
bool controller::validateMatrix(QTableWidget* tblMatrixA, QTableWidget* tblMatrixB){
    // Clear the matrices so that old values are not stored
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

            // Check if items are null
            if(!itemA || !itemImag)
            {
                return false;
            }
            bool conversionItemA;
            bool conversionImagA;
            double valueA = itemA->text().toDouble(&conversionItemA);
            double imagA = itemImag->text().toDouble(&conversionImagA);

            // Check if there has been a successful conversion between the string to double
            if(!conversionItemA || !conversionImagA)
            {
                return false;
            }
            // Add the row
            rowA.push_back(std::make_pair(valueA, imagA));
        }
        // Add to the matrix
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

            // Check if items are null
            if(!itemB || !itemImag)
            {
                return false;
            }
            bool conversionItemB;
            bool conversionImagB;
            double valueB = itemB->text().toDouble(&conversionItemB);
            double imagB = itemImag->text().toDouble(&conversionImagB);

            // Check if there has been a successful conversion between the string to double
            if(!conversionItemB || !conversionImagB)
            {
                return false;
            }
            // Add to the row
            rowB.push_back(std::make_pair(valueB, imagB));
        }
        // Add to the matrix
        matrixB.push_back(rowB);
    }
    return true;
}

