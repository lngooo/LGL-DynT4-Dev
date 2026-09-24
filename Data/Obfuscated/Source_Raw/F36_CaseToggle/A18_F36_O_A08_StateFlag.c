/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A18_F36_O_A08_StateFlag.c
* Logic: Flag-based arithmetic derived from A08.
*/
#include <stdio.h>

void gjnF(char* dFE) {
    while (*dFE) {
        int po1 = (*dFE >= 'a' && *dFE <= 'z');
        int Wu = (*dFE >= 'A' && *dFE <= 'Z');
        int lnVS = (po1 * -32) + (Wu * 32);
        *dFE = (char)((int)*dFE + lnVS);
        dFE++;
    }
}

int main(int LK6, char* N[]) {
    if (LK6 < 2) return 0;
    gjnF(N[1]);
    printf("%s\n", N[1]);
    return 0;
}