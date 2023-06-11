#include "class.h"

void expression::setX(double x1) {
    x = x1;
}

void expression::setN(double n1) {
    n = n1;
}

void expression::setM(double m1) {
    m = m1;
}

double expression::getX() {
    return x;
}

double expression::getN() {
    return n;
}

double expression::getM() {
    return m;
}

double expression::express() {
    double a = pow(atan(x + 1), 2) - (n / (n - m));
    return a;
}
