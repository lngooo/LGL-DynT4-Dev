/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A06_F36_S_PointerDiff.c
* Logic: Uses pointer subtraction to calculate indices for case shifting.
*/
#include <stdio.h>

void CaseToggle(char* s) {
    char *p = s;
    while (*p) {
        char c = *p;
        if (c >= 65 && c <= 90) *p = c + (97 - 65);
        else if (c >= 97 && c <= 122) *p = c - (97 - 65);
        p++;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    CaseToggle(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}