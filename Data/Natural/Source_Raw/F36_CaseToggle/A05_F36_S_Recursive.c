/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A05_F36_S_Recursive.c
* Logic: Recursive transformation of the string head.
*/
#include <stdio.h>

void CaseToggle(char* s) {
    if (!*s) return;
    if (*s >= 'a' && *s <= 'z') *s -= 32;
    else if (*s >= 'A' && *s <= 'Z') *s += 32;
    CaseToggle(s + 1);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    CaseToggle(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}