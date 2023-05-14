#include "functions.h"
#include "class.h"

int TPair::getX() {
    return x;
}

int TPair::getY() {
    return y;
}

void TPair::setX(int a) {
    x = a;
}

void TPair::setY(int a) {
    y = a;
}

float TMoney::getHryvnas() {
    return hryvnas;
}

int TTime::getMinutes() {
    return minutes;
}

TPair TPair::operator++(int a) {
    x++;
    y++;
}

TPair TPair::operator--() {
    x--;
    y--;
}

void TMoney::plusHryvnas() {
    hryvnas = x + (float)y / 100;
}

void TTime::plusMinutes() {
    minutes = x * 60 + y;
}
