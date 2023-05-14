#include "functions.h"
#include "class.h"
#include <limits>


void check_int(int* variable) {
    char sym;
    bool er;
    cout << "Enter n: ";
    do {
        er = false;

        cin >> *variable;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Incorrect input, try again" << endl;
            er = true;
        }
        else if (*variable < 0) {
            cout << "Incorrect input, can't be negative, try again" << endl;
            er = true;
        }
        else {
            cin.get(sym);
            if (sym != '\n') {
                cout << "Incorrect input, try again" << endl;
                er = true;
            }
        }
    } while (er);
}

void enterInf(TMoney *mon, TTime *tim, int n) {
    int x1, y1;
    for (int i = 0; i < n; i++) {
        x1 = 1 + rand() % (1000 - 1 + 1);
        mon[i].setX(x1);
        y1 = 1 + rand() % (99 - 1 + 1);
        mon[i].setY(y1);
        mon[i].plusHryvnas();
        x1 = 1 + rand() % (20 - 1 + 1);
        tim[i].setX(x1);
        y1 = 1 + rand() % (59 - 1 + 1);
        tim[i].setY(y1);
        tim[i].plusMinutes();
    }
}

void suma(TMoney *mon, TTime *tim, int n) {
    float sum[n];
    for (int i = 0; i < n; i++) {
        sum[i] = ((float)tim[i].getMinutes()) * (mon[i].getHryvnas());
            cout << mon[i].getHryvnas() << " hryvnas \t" << tim[i].getX() << " hours " << tim[i].getY() << " minutes \t suma = ";
            printf("%.2f\n", sum[i]);
    }
}

void changeMoney(TMoney* A, int n) {
    for (int i = 0; i < n; i++) {
       A[i]++;
       A[i].plusHryvnas();
    }
}

void changeTime(TTime* A, int n) {
    for (int i = 0; i < n; i++) {
        --A[i];
        A[i].plusMinutes();
    }
}