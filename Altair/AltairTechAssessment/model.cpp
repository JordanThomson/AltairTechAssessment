/* This is the Model class of the MVC design pattern
 * The class holds all the logic for the calculations. It will send
 * its results back to the controller class
 */
#include "model.h"

// Constructor
model::model()
{

}

// Destructor
model::~model(){

}

// Recursive Function to calculate Floyds number at specific row and column
int model::floydsNumber(int row, int col, int i = 1, int j = 1, int item = 1){

    // If row 'i' is greater than target row number 'row' then we have passed
    // the target cell in Floyds triangle
    if (i > row) {
        return -1; // Return -1 if the item is not found in the given row and column
    } else if (i == row && j == col) { // if current cell (i,j) is target cell then return
        return item;
    } else if (j < i) { // If current column 'j' is less than current row 'i', it means
                        // we are still in the same row so move to next column
        return floydsNumber(row, col, i, j + 1, item + 1);
    } else { // Reached the end of row so we move to the next row and the first column
        return floydsNumber(row, col, i + 1, 1, item + 1);
    }
}

// Function that multiplies 2 complex numbers
// Implements this formula, (a + bi) * (c + di) = (ac - bd) + (ad + bc)i, where a and c are real parts of the first
// and second complex numbers and b and d are the imaginary parts
std::pair<double, double> model::multiplyComplex(const std::pair<double, double>& a, const std::pair<double, double>& b) {
    std::pair<double, double> result;

    // Multiply the real parts and subtract the product of the imaginary parts
    result.first = a.first * b.first - a.second * b.second;
    // Multiply real part of first number by the imaginary part of second and add the product of imaginary
    // part of the first number and real part of the second
    result.second = a.first * b.second + a.second * b.first;
    return result;
}

// Function to mulitply two matices
std::vector<std::vector<std::pair<double, double>>> model::multiplyMatrices(const std::vector<std::vector<std::pair<double, double>>>& A,
                                                                            const std::vector<std::vector<std::pair<double, double>>>& B) {
    int rowsA = A.size();
    int colsA = A[0].size();
    int colsB = B[0].size();

    std::vector<std::vector<std::pair<double, double>>> result(rowsA, std::vector<std::pair<double, double>>(colsB, {0.0, 0.0}));

    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                // Multiply complex number at (i,k) in A by the complex number at (k,j) in B
                std::pair<double, double> product = multiplyComplex(A[i][k], B[k][j]);
                result[i][j].first += product.first;
                result[i][j].second += product.second;
            }
        }
    }

    return result;
}
