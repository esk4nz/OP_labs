#ifndef PROJECT5_CL_CLASS_H
#define PROJECT5_CL_CLASS_H

#include <iostream>
#include <time.h>
#include <iomanip>

class TPair {
protected:
    int x;
    int y;
public:
    void setX(int a);
    int getX();
    void setY(int a);
    int getY();
    TPair operator++(int);
    TPair operator--();
};

class TMoney :public TPair {
    float hryvnas;
public:
    float getHryvnas();
    void plusHryvnas();
};

class TTime :public TPair {
    int minutes;
public:
    int getMinutes();
    void plusMinutes();
};

#endif