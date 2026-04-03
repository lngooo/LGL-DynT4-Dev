/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A14_F36_O_A05_TernaryRec.c
* Logic: Recursive implementation with nested ternary operators derived from A05.
*/
#include <stdio.h>

void CaseToggle(char* s) {
    if (!*s) return;
    *s = (*s >= 'a' && *s <= 'z') ? (*s - 32) : ((*s >= 'A' && *s <= 'Z') ? (*s + 32) : *s);
    CaseToggle(s + 1);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    CaseToggle(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}