#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void names();											//���������� ����� ����� �����, ������ �� ��� ����������
void inputFile(string, string, string);					//���������� ���� ��������
void deleteLastSymbol(string, string, string);			//��������� ������ ������� "&"
void addNewText(string, string, string);				//������ ����� �� ��������
void deleteCommasAndDots(string, string, string);		//��������� ����, ������ �� �������� � ���� ����� ����� ������ �� ������ �����
void moreThanN(string, string, string arr[], int size);	//������� ����� N �� ���������� ���� ������ �������, �� ������������ � ���� ����� N ���� �� ���������� �� ����������
void makeArrayOfWords(string, string);					//���������� ����� �� ���
void textOut(string, string);							//�������� ���� �������� �� ������