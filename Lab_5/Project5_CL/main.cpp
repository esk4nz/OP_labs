#include "functions.h"
#include "class.h"

int main() {
    srand(time(nullptr));
    int n;
    check_int(&n);
    cout << endl;


    TMoney *money = new TMoney[n];
    TTime *time = new TTime[n];
    enterInf(money, time, n);
    suma(money, time, n);


    changeMoney(money, n);
    changeTime(time, n);
    cout << "\n\n";
    suma(money, time, n);
    return 0;
}


