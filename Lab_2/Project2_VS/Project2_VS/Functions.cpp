#include "Functions.h"

void names() {
	string nameIn = "input.bin";
	string nameOut = "output.bin";
	string nameF = "file.bin";
	productsInfo(nameIn, nameOut);
	deleteItems(nameOut, nameF);
}

void productsInfo(string name, string name1) {
	ofstream nameIn(name, ios::binary);
	product A;
	int m;
	do {
		cout << "Enter the product's name: ";
		cin >> A.name;
		cout << "Enter the product's type: ";
		cin >> A.type;
		cout << "Enter the product's color: ";
		cin >> A.color;
		cout << "Enter the product's price: ";
		cin >> A.price;
		cout << "Enter the product's ammount: ";
		cin >> A.ammount;
		nameIn.write((char*)&A, sizeof(A));			
		cout << "Do you want to continue:\n1 - yes\n2 - no\n";
		cin >> m;
		} while (m == 1);
	nameIn.close();
	outputFileIn(name);
	makeObjects(name, name1);
}

void makeObjects(string name, string name1) {
	ifstream nameIn(name, ios::binary);
	ofstream nameOut(name1, ios::binary);
	char s[50];
	string species;
	cout << "Enter the type which you want to see: ";
	cin >> species;
	product A;
	while (nameIn.read((char*)&A, sizeof(A))) {
		if (A.type == species) nameOut.write((char*)&A, sizeof(A));
	}
	nameIn.close();
	nameOut.close();
	outputFileOut(name1);
}

void deleteItems(string name1, string name2) {
	ifstream nameOut(name1, ios::binary);
	ofstream nameF(name2, ios::binary);
	product A;
	while (nameOut.read((char*)&A, sizeof(A))) {
		if (A.price < 300 || A.price > 500) nameF.write((char*)&A, sizeof(A));
	}
	nameF.close();
	nameOut.close();
	remove(name1.c_str());
	rename(name2.c_str(), name1.c_str());
	outputFileOut(name1);
}

void outputFileIn(string name) {
	ifstream nameIn(name, ios::binary);
	product A;
	cout << "\n\n\n\t\t\t-----Input file-----\n\n\n\n";
	cout << "Name\t\tType\t\tColor\t\tPrice\t\tAmmount\n\n\n" << endl;
	while (nameIn.read((char*)&A, sizeof(A))) {
		cout << A.name << "\t\t" << A.type << "\t\t" << A.color << "\t\t" << A.price << "\t\t" << A.ammount << '\n' << endl;
	}
	nameIn.close();
}

void outputFileOut(string name1) {
	ifstream nameOut(name1, ios::binary);
	product A;
	cout << "\n\n\n\t\t\t-----Output file-----\n\n\n\n";
	cout << "Name\t\tType\t\tColor\t\t\Price\t\tAmmount\n\n\n" << endl;
	while (nameOut.read((char*)&A, sizeof(A))) {
		cout << A.name << "\t\t" << A.type << "\t\t" << A.color << "\t\t" << A.price << "\t\t" << A.ammount << '\n' << endl;
	}
	nameOut.close();
}
