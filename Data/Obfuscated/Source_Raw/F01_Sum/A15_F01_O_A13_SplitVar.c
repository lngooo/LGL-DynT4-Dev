/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A15_F01_O_A13_SplitVar.c
 * Implementation Logic: Accumulator split into two variables to obfuscate data flow.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int R(int d) {
    int UvZ3 = 0, p = 0;
    for (int mI = 1; mI <= d; mI++) {
        if (mI % 2 == 0) UvZ3 += mI;
        else p += mI;
    }
    return UvZ3 + p;
}

int main(int iBlr, char *p37e[]) {
    if (iBlr < 2) return 1;
    printf("%d\n", R(atoi(p37e[1])));
    return 0;
}