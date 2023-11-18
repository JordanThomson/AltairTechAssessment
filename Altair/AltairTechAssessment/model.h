#ifndef MODEL_H
#define MODEL_H

#include <QMainWindow>

class model
{
public:
    // Constructor
    model();

    // Destructor
    ~model();

    // Recursive Function to calculate Floyds number at specific row and column
    int floydsNumber(int row, int col, int i, int j, int item);

    // Function that multiplies 2 complex numbers
    std::pair<double, double> multiplyComplex(const std::pair<double, double>& a, const std::pair<double, double>& b);

    // Function to multiply two matrices of complex numbers
    std::vector<std::vector<std::pair<double, double>>> multiplyMatrices(const std::vector<std::vector<std::pair<double, double>>>& A, const std::vector<std::vector<std::pair<double, double>>>& B);
};

#endif // MODEL_H
