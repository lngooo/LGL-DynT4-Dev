/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A20_F36_O_A02_WhileTrue.c
* Logic: infinite loop with manual break and pointer increment derived from A02.
*/
#include <stdio.h>

void CaseToggle(char* s) {
    while (1) {
        if (!*s) break;
        unsigned char c = (unsigned char)*s;
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            *s = (char)(c ^ 0x20);
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