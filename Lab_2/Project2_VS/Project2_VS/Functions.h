#include <iostream>
#include <string>
#include <fstream>

using namespace std;
void names();
void productsInfo(string, string);
void makeObjects(string, string);
void outputFileOut(string);
void outputFileIn(string);
void deleteItems(string, string);

struct product {
	char name[50];
	char type[50];
	char color[50];
	float price;
	int ammount;
};