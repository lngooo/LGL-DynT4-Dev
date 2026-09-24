/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A12_F37_O_A01_VarSplit.c
* Logic: Index j split into j_base and j_offset derived from A01.
*/
#include <stdio.h>
#include <ctype.h>

void h(char* N) {
    int UM = 0, d2 = 0, xpS7 = 0;
    while (N[UM]) {
        if (!isspace((unsigned char)N[UM])) {
            N[d2 + xpS7] = N[UM];
            if (xpS7 < 10) xpS7++;
            else { d2 += xpS7; xpS7 = 1; }
        }
        UM++;
    }
    N[d2 + xpS7] = '\0';
}

int main(int Scwh, char* E[]) {
    if (Scwh < 2) return 0;
    h(E[1]);
    printf("%s\n", E[1]);
    return 0;
}