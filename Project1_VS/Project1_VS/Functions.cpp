#include "FunctionsList.h"


void names() {
    string nameIn = "input.txt";
    string nameOut = "output.txt";
    string nameF = "file.txt";
    inputFile(nameIn, nameOut, nameF);
}

void inputFile(string name, string name1, string name2) {
    ofstream nameIn;
    nameIn.open(name);
    string s;
    int m;
    int stop_symbol;
    cout << "Enter the text:" << endl;
    do {
        getline(cin, s);
        stop_symbol = s.find('&');
        if (stop_symbol == string::npos) nameIn << s << "\n";
        else nameIn << s;
    } while (stop_symbol == string::npos);
    nameIn.close();
    deleteLastSymbol(name, name1, name2);
    cout << "Do you want to add something?\n1 - yes\n2 - no" << endl;
    cin >> m;
    if (m == 1) addNewText(name, name1, name2);
    else if (m == 2) makeArrayOfWords(name1, name2);
    textOut(name, name1);
}

void addNewText(string name, string name1, string name2) {
    fstream nameIn;
    nameIn.open(name, fstream::app);
    string s;
    int m;
    int stop_symbol;
    cout << "Enter the text:" << endl;
    do {
        getline(cin, s);
        stop_symbol = s.find('&');
        if (stop_symbol == string::npos) nameIn << s << "\n";
        else nameIn << s;
    } while (stop_symbol == string::npos);
    nameIn.close();
    deleteLastSymbol(name, name1, name2);
    cout << "Do you want to add something?\n1 - yes\n2 - no" << endl;
    cin >> m;
    if (m == 1) addNewText(name, name1, name2);
    else if (m == 2) makeArrayOfWords(name1, name2);
}

void deleteLastSymbol(string name, string name1, string name2) {
    ifstream nameIn;
    nameIn.open(name);
    ofstream nameOut;
    nameOut.open(name1);
    string s;
    int position;
    int lengthstring;
    while (!nameIn.eof()) {
        getline(nameIn, s);
        lengthstring = s.length();
        position = s.find('&');
        if (position >= 0) s.erase(position, lengthstring - position);
        if (!nameIn.eof()) nameOut << s << endl;
        else nameOut << s;
    }
    nameOut.close();
    nameIn.close();
    remove(name.c_str());
    rename(name1.c_str(), name.c_str());
    deleteCommasAndDots(name, name1, name2);
}

void deleteCommasAndDots(string name, string name1, string name2) {
    ifstream nameIn;
    nameIn.open(name);
    ofstream nameOut;
    nameOut.open(name1);
    string s;
    int pos;
    int i = 0;
    while (!nameIn.eof()) {
        getline(nameIn, s, ' ');
        if ((s.find(',') != string::npos) || (s.find('.') != string::npos))
            while ((s.find(',') != string::npos) || (s.find('.') != string::npos)) {
                if (s.find(',') != string::npos) pos = s.find(',');
                else if (s.find('.') != string::npos) pos = s.find('.');
                s.erase(pos, 1);
            }
        nameOut << s << '\n';
    }
    nameIn.close();
    nameOut.close();
}

void makeArrayOfWords(string name1, string name2) {
    ifstream nameOut;
    nameOut.open(name1);
    string s;
    int i = 0;
    string words[300];
    while (!nameOut.eof()) {
        getline(nameOut, s);
        if (s != "") {
            words[i] = s;
            i++;
        }
    }
    nameOut.close();
    moreThanN(name1, name2, words, i);
}

void moreThanN(string name1, string name2, string arr[], int size) {
    int N;
    cout << "Enter the N: ";
    cin >> N;
    ofstream nameF;
    nameF.open(name2);
    ofstream nameOut;
    nameOut.open(name1);
    int k = 0;
    int index = 0;
    string s;
    string repeatWords[300];
    int indexArray[300];
    for (int i = 0; i < size; i++) {
        bool f = true;
        int count = 1;
        for (int j = i + 1; j < size; j++)
            if (arr[i] == arr[j]) {
                indexArray[index] = j;
                index++;
                count++;
            }

        if (count > N) {
            for (int v = 0; v <= index; v++)
                if (indexArray[v] == i) {
                    f = false;
                    break;
                }
            if (f) {
                repeatWords[k] = arr[i];
                k++;
            }
        }
    }

    for (int i = 0; i < k - 1; i++)
        for (int j = 0; j < k - i - 1; j++)
            if (repeatWords[j].length() > repeatWords[j + 1].length()) {
                swap(repeatWords[j], repeatWords[j + 1]);
            }

    for (int i = 0; i < k; i++)
        nameF << repeatWords[i] << '\n';

    nameF.close();
    nameOut.close();
    remove(name1.c_str());
    rename(name2.c_str(), name1.c_str());
}

void textOut(string name, string name1) {
    ifstream nameOut;
    nameOut.open(name);
    ifstream nameOut1;
    nameOut1.open(name1);
    string s;
    cout << "\n\n\n----------------- Our file1 -----------------\n\n\n";
    while (!nameOut.eof()) {
        getline(nameOut, s);
        cout << s << endl;
    }
    cout << "\n\n\n----------------- Our file2 -----------------\n\n\n";
    while (!nameOut1.eof()) {
        getline(nameOut1, s);
        cout << s << endl;
    }
}