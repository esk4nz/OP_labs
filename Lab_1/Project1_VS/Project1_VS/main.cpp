#include "FunctionsList.h"
#include "FunctionsListC.h"

int main(int argc, char* argv[]) {
        char mode[] = "mode";
        char mode1[] = "FP";
        char mode2[] = "FS";
        if (argc != 3 || strcmp(argv[1], mode) != 0) {
            cout << "Launch the program with particular mode!\n" <<
                "exeName.exe mode FP/FS\n";
        }
        else if (!strcmp(argv[2], mode1)) {
            namesC();
        }
        else if (!strcmp(argv[2], mode2)) {
            names();
        }
        else {
            cout << "The only modes are FP/FS";
        }
        system("pause");
}