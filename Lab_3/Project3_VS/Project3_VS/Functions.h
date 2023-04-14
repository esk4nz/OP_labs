#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

int getAmmountOfcubicPolynomials();
float getLimitA();
float getLimitB();
float getE(float, float);
void check_int(int*);
void check_float(float*);


class cubicPolynomial {
	float a0;
	float a1;
	float a2;
	float a3;
	float a;
	float b;
public:
	float getA0();
	void setA0(float aa0);
	float getA1();
	void setA1(float aa1);
	float getA2();
	void setA2(float aa2);
	float getA3();
	void setA3(float aa3);
	float getA();
	void setA(float aa);
	float getB();
	void setB(float bb);
};

cubicPolynomial* makeArray(int);
void output(cubicPolynomial*, float, float, float, int);
void counting(cubicPolynomial*, int, float, float, float);