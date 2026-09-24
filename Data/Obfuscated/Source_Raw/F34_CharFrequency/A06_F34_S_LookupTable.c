/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A06_F34_S_LookupTable.c
* Logic: Full histogram pre-calculation for the string.
*/
#include <stdio.h>

int U(char* oOr, char b5F) {
    int CMsz[256] = {0};
    while (*oOr) {
        CMsz[(unsigned char)*oOr]++;
        oOr++;
    }
    return CMsz[(unsigned char)b5F];
}

int main(int dT, char* iUzW[]) {
    if (dT < 3) return 0;
    printf("%d\n", U(iUzW[1], iUzW[2][0]));
    return 0;
}