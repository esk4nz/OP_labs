#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void names();											//створеюємо імена файлів вводу, виводу та для тимчасовий
void inputFile(string, string, string);					//створеюємо файл введення
void deleteLastSymbol(string, string, string);			//видаляємо символ зупинки "&"
void addNewText(string, string, string);				//дадаємо текст за бажанням
void deleteCommasAndDots(string, string, string);		//видаляємо коми, крапки та записуємо у файл кожне слово окремо на одному рядку
void moreThanN(string, string, string arr[], int size);	//вводимо число N та заповнюємо файл виводу словами, які повторюються у файлі більше N разів та виводяться за зростанням
void makeArrayOfWords(string, string);					//створеюємо масив із слів
void textOut(string, string);							//виводимо файл введення та виводу