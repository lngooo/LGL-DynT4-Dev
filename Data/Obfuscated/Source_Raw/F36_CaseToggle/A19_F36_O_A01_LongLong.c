/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A19_F36_O_A01_LongLong.c
* Logic: Uses 64-bit integer casts for character math derived from A01.
*/
#include <stdio.h>

void ZaeT(char* k4B) {
    for (int bn = 0; k4B[bn]; bn++) {
        long long dGD0 = (long long)k4B[bn];
        if (dGD0 >= 97LL && dGD0 <= 122LL) dGD0 -= 32LL;
        else if (dGD0 >= 65LL && dGD0 <= 90LL) dGD0 += 32LL;
        k4B[bn] = (char)dGD0;
    }
}

int main(int gf, char* d1kQ[]) {
    if (gf < 2) return 0;
    ZaeT(d1kQ[1]);
    printf("%s\n", d1kQ[1]);
    return 0;
}