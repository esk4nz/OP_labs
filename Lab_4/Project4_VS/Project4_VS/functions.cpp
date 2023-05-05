#include "functions.h"
#include "class.h"

float matrixNorm(matrix A) {
    int suma = 0;
    float result;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            suma += pow(A.getElements(i, j), 2);
        }
    }
    result = sqrt(suma);
    return result;
}