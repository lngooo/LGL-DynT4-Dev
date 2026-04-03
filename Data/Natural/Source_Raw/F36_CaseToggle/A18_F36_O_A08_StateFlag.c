/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A18_F36_O_A08_StateFlag.c
* Logic: Flag-based arithmetic derived from A08.
*/
#include <stdio.h>

void CaseToggle(char* s) {
    while (*s) {
        int l = (*s >= 'a' && *s <= 'z');
        int u = (*s >= 'A' && *s <= 'Z');
        int diff = (l * -32) + (u * 32);
        *s = (char)((int)*s + diff);
        s++;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    CaseToggle(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}