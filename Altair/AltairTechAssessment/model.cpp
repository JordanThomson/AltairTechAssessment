#include "model.h"

model::model()
{

}

int model::floydsNumber(int row, int col, int i = 1, int j = 1, int item = 1){
    if (i > row) {
        return -1; // Return -1 if the item is not found in the given row and column
    } else if (i == row && j == col) {
        return item;
    } else if (j < i) {
        return floydsNumber(row, col, i, j + 1, item + 1);
    } else {
        return floydsNumber(row, col, i + 1, 1, item + 1);
    }
}

std::pair<double, double> model::multiplyComplex(const std::pair<double, double>& a, const std::pair<double, double>& b) {
    std::pair<double, double> result;
    result.first = a.first * b.first - a.second * b.second;
    result.second = a.first * b.second + a.second * b.first;
    return result;
}

std::vector<std::vector<std::pair<double, double>>> model::multiplyMatrices(const std::vector<std::vector<std::pair<double, double>>>& A, const std::vector<std::vector<std::pair<double, double>>>& B) {
    int rowsA = A.size();
    int colsA = A[0].size();
    int colsB = B[0].size();

    std::vector<std::vector<std::pair<double, double>>> result(rowsA, std::vector<std::pair<double, double>>(colsB, {0.0, 0.0}));

    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                std::pair<double, double> product = multiplyComplex(A[i][k], B[k][j]);
                result[i][j].first += product.first;
                result[i][j].second += product.second;
            }
        }
    }

    return result;
}
