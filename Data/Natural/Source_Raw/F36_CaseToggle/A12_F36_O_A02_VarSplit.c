/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A12_F36_O_A02_VarSplit.c
* Logic: Splitting the XOR operand 32 into x1 + x2 derived from A02.
*/
#include <stdio.h>

void CaseToggle(char* s) {
    int x1 = 16, x2 = 16;
    while (*s) {
        char c = *s;
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            *s = c ^ (x1 + x2);
        }
        s++;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    CaseToggle(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}