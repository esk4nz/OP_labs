#include "FunctionsListC.h"

void namesC() {
    char nameIn[] = "input.txt";
    char nameOut[] = "output.txt";
    char nameF[] = "file.txt";
    inputFileC(nameIn, nameOut, nameF);
}

void inputFileC(char* name, char* name1, char* name2) {    
    FILE* nameIn = fopen(name, "w");
    char s[1000];
    int stop_symbol;
    int m;
    printf("Enter the text:\n");
    do {
        fgets(s, 1000, stdin);
        stop_symbol = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == '&') {
                stop_symbol = 1;
                break;
            }
        }
        if (!stop_symbol) fprintf(nameIn, "%s", s);
        else fprintf(nameIn, "%s", s);
    } while (!stop_symbol);
    fclose(nameIn);
    deleteLastSymbolC(name, name1, name2);
    printf("Do you want to add something?\n1 - yes\n2 - no\n");
    scanf("%d", &m);
    if (m == 1) addNewTextC(name, name1, name2);
    else if (m == 2) makeArrayOfWordsC(name1, name2);
    textOutC(name, name1);
}


void addNewTextC(char* name, char* name1, char* name2) {
    FILE* nameIn = fopen(name, "a");
    char s[100];
    int stop_symbol;
    printf("Enter the text:\n");
    int m;
    do {
        fgets(s, 100, stdin);
        stop_symbol = -1;
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == '&') {
                stop_symbol = i;
                break;
            }
        }
        if (stop_symbol == -1) fprintf(nameIn, "%s", s);
        else fprintf(nameIn, "%s", s);
    } while (stop_symbol == -1);
    fclose(nameIn);
    deleteLastSymbolC(name, name1, name2);
    printf("Do you want to add something?\n1 - yes\n2 - no\n");
    scanf("%d", &m);
    if (m == 1) addNewTextC(name, name1, name2);
    else if (m == 2) makeArrayOfWordsC(name1, name2);
}

void deleteLastSymbolC(char* name, char* name1, char* name2) {
    FILE* nameIn = fopen(name, "r");
    FILE* nameOut = fopen(name1, "w");
    char s[1000];
    int position;
    int lengthstring;
    while (fgets(s, 1000, nameIn)) {
        lengthstring = 0;
        while (s[lengthstring] != '\0') {
            lengthstring++;
        }
        position = -1;
        for (int i = 0; i < lengthstring; i++) {
            if (s[i] == '&') {
                position = i;
                break;
            }
        }
        if (position >= 0) {
            s[position] = '\0';            
        }
        fprintf(nameOut, "%s", s);
    }
    fclose(nameOut);
    fclose(nameIn);
    remove(name);
    rename(name1, name);
    deleteCommasAndDotsC(name, name1, name2);
}

void deleteCommasAndDotsC(char* name, char* name1, char* name2) {
    FILE* nameIn = fopen(name, "r");
    FILE* nameOut = fopen(name1, "w");
    char s[1000];
    char ch;
    int pos = 0;
    while ((ch = fgetc(nameIn)) != EOF) {
        if (isspace(ch) || (ispunct(ch) && ch != '\'')) {
            if (pos > 0) {
                s[pos] = '\0';
                fprintf(nameOut, "%s\n", s);
                pos = 0;
            }
        }
        else {
            s[pos++] = ch;
        }
    }
    if (pos > 0) {
        s[pos] = '\0';
        fprintf(nameOut, "%s\n", s);
    }
    fclose(nameIn);
    fclose(nameOut);
}


void makeArrayOfWordsC(char* name1, char* name2) {
    FILE* nameOut;
    nameOut = fopen(name1, "r");
    char s[100];
    int i = 0;
    char** words = (char**)malloc(sizeof(char*) * 300);
    for (int j = 0; j < 300; j++) {
        words[j] = (char*)malloc(sizeof(char) * 100);
    }
    while (fgets(s, sizeof(s), nameOut)) {
        if (s[0] != '\n') {
            sscanf(s, "%s", words[i]);
            i++;
        }
    }
    fclose(nameOut);
    moreThanNC(name1, name2, words, i);
}

void moreThanNC(char* name1, char* name2, char** arr, int size) {
    int N;
    printf("Enter the N: ");
    scanf("%d", &N);
    FILE* nameF;
    nameF = fopen(name2, "w");
    FILE* nameOut;
    nameOut = fopen(name1, "w");
    int k = 0;
    int index = 0;
    char s[300];
    char* repeatWords[300];
    int indexArray[300];
    for (int i = 0; i < size; i++) {
        bool f = 1;
        int count = 1;
        for (int j = i + 1; j < size; j++)
            if (strcmp(arr[i], arr[j]) == 0) {
                indexArray[index] = j;
                index++;
                count++;
            }

        if (count > N) {
            for (int v = 0; v <= index; v++)
                if (indexArray[v] == i) {
                    f = 0;
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
            if (strlen(repeatWords[j]) > strlen(repeatWords[j + 1])) {
                char* temp = repeatWords[j];
                repeatWords[j] = repeatWords[j + 1];
                repeatWords[j + 1] = temp;
            }

    for (int i = 0; i < k; i++)
        fprintf(nameF, "%s\n", repeatWords[i]);

    fclose(nameF);
    fclose(nameOut);
    remove(name1);
    rename(name2, name1);
}

void textOutC(char* name, char* name1) {
    FILE* nameOut;
    nameOut = fopen(name, "r");
    FILE* nameOut1;
    nameOut1 = fopen(name1, "r");
    char s[100];
    printf("\n\n\n----------------- Our file1 -----------------\n\n\n");
    while (fgets(s, sizeof(s), nameOut)) {
        printf("%s", s);
    }
    printf("\n\n\n----------------- Our file2 -----------------\n\n\n");
    while (fgets(s, sizeof(s), nameOut1)) {
        printf("%s", s);
    }
    fclose(nameOut);
    fclose(nameOut1);
}