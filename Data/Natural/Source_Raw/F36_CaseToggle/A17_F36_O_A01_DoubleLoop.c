/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A17_F36_O_A01_DoubleLoop.c
* Logic: Nested loop with a single execution inner loop derived from A01.
*/
#include <stdio.h>

void CaseToggle(char* s) {
    for (int i = 0; s[i]; i++) {
        for (int k = 0; k < 1; k++) {
            char val = s[i];
            if (val >= 97 && val <= 122) s[i] = val - 32;
            else if (val >= 65 && val <= 90) s[i] = val + 32;
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    CaseToggle(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}