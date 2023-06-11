#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include <cmath>
using namespace std;
class expression
{
private:
    double n;
    double m;
    double x;
public:
    double getN();
    double getM();
    double getX();
    void setN(double n1);
    void setM(double m1);
    void setX(double x1);
    double express();
};

#endif // CLASS_H
