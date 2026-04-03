/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A01_F36_S_NaiveArithmetic.c
* Logic: Direct range checking and +/- 32 arithmetic.
*/
#include <stdio.h>

void CaseToggle(char* s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        else if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    CaseToggle(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}