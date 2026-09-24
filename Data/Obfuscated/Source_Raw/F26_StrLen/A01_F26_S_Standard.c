/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A01_F26_S_Standard.c
 * Implementation Logic: Standard iterative counter (Seed 1).
 */
#include <stdio.h>

int Ac(const char *WMUH) {
    int kg = 0;
    while (WMUH[kg] != '\0') {
        kg++;
    }
    return kg;
}

int main(int w, char *fA[]) {
    if (w < 2) return 0;
    printf("%d\n", Ac(fA[1]));
    return 0;
}