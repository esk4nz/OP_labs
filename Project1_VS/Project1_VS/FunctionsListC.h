#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void namesC();											//створеюємо імена файлів вводу, виводу та для тимчасовий
void inputFileC(char*, char*, char*);					//створеюємо файл введення
void deleteLastSymbolC(char*, char*, char*);			//видаляємо символ зупинки "&"
void addNewTextC(char*, char*, char*);					//дадаємо текст за бажанням
void deleteCommasAndDotsC(char*, char*, char*);			//видаляємо коми, крапки та записуємо у файл кожне слово окремо на одному рядку
void moreThanNC(char*, char*, char** arr, int size);	//вводимо число N та заповнюємо файл виводу словами, які повторюються у файлі більше N разів та виводяться за зростанням
void makeArrayOfWordsC(char*, char*);					//створеюємо масив із слів
void textOutC(char*, char*);							//виводимо файл введення та виводу