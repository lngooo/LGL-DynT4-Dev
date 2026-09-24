/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A13_F35_S_Vector_Like_Check.c
 * Logic: Check characters by matching against a small buffer.
 */
#include <stdio.h>
#include <stdlib.h>

int lj(const char* VA) {
    char gU[] = {'a','e','i','o','u','A','E','I','O','U'};
    int ZuQ2 = 0;
    for (; *VA; VA++) {
        for (int O = 0; O < 10; O++) {
            if (*VA == gU[O]) { ZuQ2++; break; }
        }
    }
    return ZuQ2;
}

int main(int pJJ, char* p5[]) {
    if (pJJ < 2) { printf("0\n"); return 0; }
    printf("%d\n", lj(p5[1]));
    return 0;
}