#include "functions.h"
#include "class.h"

int main() {
    srand(time(NULL));
    matrix M1, M2(n), M3(M2);
    cout << "M1:\n";
    M1.show();
    cout << "\n\n";
    cout << "M2:\n";
    M2.show();
    cout << "\n\n";
    cout << "M3:\n";
    M3.show();
    cout << "\n\n";
    cout << "M3:\n";
    M3 = M2 + M1;
    M3.show();
    cout << "\n\n";
    cout << "M3:\n";
    M3 = *M3;
    M3.show();
    cout << "\n\nMatrix norm: " << matrixNorm(M3);
}