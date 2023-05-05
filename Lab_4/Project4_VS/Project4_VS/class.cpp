#include "class.h"

matrix::matrix() {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            array[i][j] = 0 + rand() % (20 - 0 + 1);
}

matrix::matrix(int a) {
    for (int i = 0; i < a; i++)
        for (int j = 0; j < a; j++)
            array[i][j] = 0 + rand() % (20 - 0 + 1);
}

matrix::matrix(matrix& A) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            array[i][j] = A.array[i][j];
}

void matrix::show() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << getElements(i, j) << ' ';
        cout << endl;
    }
}

int matrix::getElements(int i, int j) {
    return array[i][j];
}

matrix matrix::operator+(matrix& A) {
    matrix tmp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tmp.array[i][j] = array[i][j] + A.array[i][j];
        }
    }
    return tmp;
}

matrix matrix::operator*() {
    matrix tmp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tmp.array[i][j] = 0;
            for (int k = 0; k < n; k++) {
                tmp.array[i][j] += array[i][k] * array[k][j];
            }
        }
    }
    return tmp;
}