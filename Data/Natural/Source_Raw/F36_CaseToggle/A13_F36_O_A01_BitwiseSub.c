/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A13_F36_O_A01_BitwiseSub.c
* Logic: Instruction substitution using bitwise NOT/add derived from A01.
*/
#include <stdio.h>

void CaseToggle(char* s) {
    for (; *s; s++) {
        if (*s >= 97 && *s <= 122) {
            *s = *s + (~32 + 1); // equivalent to -32
        } else if (*s >= 65 && *s <= 90) {
            *s = *s + 32;
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    CaseToggle(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}