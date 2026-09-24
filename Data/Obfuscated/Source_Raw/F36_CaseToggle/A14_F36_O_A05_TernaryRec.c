/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A14_F36_O_A05_TernaryRec.c
* Logic: Recursive implementation with nested ternary operators derived from A05.
*/
#include <stdio.h>

void LeH(char* iS) {
    if (!*iS) return;
    *iS = (*iS >= 'a' && *iS <= 'z') ? (*iS - 32) : ((*iS >= 'A' && *iS <= 'Z') ? (*iS + 32) : *iS);
    LeH(iS + 1);
}

int main(int bcdr, char* ABgt[]) {
    if (bcdr < 2) return 0;
    LeH(ABgt[1]);
    printf("%s\n", ABgt[1]);
    return 0;
}