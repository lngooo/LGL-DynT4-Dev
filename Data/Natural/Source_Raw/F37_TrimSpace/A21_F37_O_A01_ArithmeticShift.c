/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A21_F37_O_A01_ArithmeticShift.c
* Logic: Shifts non-spaces using arithmetic addressing derived from A01.
*/
#include <stdio.h>

void TrimSpace(char* s) {
    int r = 0, w = 0;
    for (; s[r]; r++) {
        char val = s[r];
        int ws = (val == 32 || val == 9 || val == 10 || val == 13);
        if (!ws) {
            *(s + w) = val;
            w = w + 1;
        }
    }
    *(s + w) = 0;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TrimSpace(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}