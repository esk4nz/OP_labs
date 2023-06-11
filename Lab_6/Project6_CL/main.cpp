#include "functions.cpp"
int main() {
    int type=1;
    cout << "Enter value type(string-1,double-2,char-3,int-4):";cin>>type;
    switch (type) {
        case 1:
            start_program<string>();
            break;
        case 2:
            start_program<double>();
            break;

        case 3:
            start_program<char>();
            break;
        case 4:
            start_program<int>();
            break;
    }
    return 0;
}
