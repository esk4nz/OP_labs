#include "functions.h"

const int n = 3;

class matrix {
    int array[n][n];
public:
    matrix();
    matrix(int);
    matrix(matrix&);
    void show();
    void setElements(int, int, int);
    int getElements(int, int);
    matrix operator+(matrix&);
    matrix operator*();
};

float matrixNorm(matrix);
