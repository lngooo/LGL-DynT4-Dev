/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A08_F36_S_Branchless.c
* Logic: Simulated branchless logic using boolean evaluation results as multipliers.
*/
#include <stdio.h>

void CaseToggle(char* s) {
    while (*s) {
        int is_lower = (*s >= 'a' && *s <= 'z');
        int is_upper = (*s >= 'A' && *s <= 'Z');
        *s = *s - (is_lower * 32) + (is_upper * 32);
        s++;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    CaseToggle(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}