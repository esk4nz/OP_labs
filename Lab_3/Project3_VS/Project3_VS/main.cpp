#include "Functions.h"

void main() {
	float a = getLimitA();
	float b = getLimitB();
	float e = getE(a, b);
	float m = getAmmountOfcubicPolynomials();
	cubicPolynomial* array = new cubicPolynomial[m];
	array = makeArray(m);
	output(array, a, b, e, m);
	counting(array, m, a, b, e);
}