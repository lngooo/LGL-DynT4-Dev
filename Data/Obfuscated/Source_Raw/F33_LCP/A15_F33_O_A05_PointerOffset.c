/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A15_F33_O_A05_PointerOffset.c
 * Implementation Logic: PointerOffset
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void qUs0(char **U, int a4NR, char *zx) {
    char *i4d = *U;
    int t = 0;
    while(*(i4d + t)) {
        for(int Z=1; Z<a4NR; Z++) {
            if(*(U[Z] + t) != *(i4d + t)) { *(zx + t) = 0; return; }
        }
        *(zx + t) = *(i4d + t);
        t++;
    }
    *(zx + t) = 0;
}

int main(int H, char *gIs[]) {
    if (H < 2) return 0;
    int oz = H - 1;
    char **U = &gIs[1];
    char v1bL[128] = {0};
    qUs0(U, oz, v1bL);
    printf("%s\n", v1bL);
    return 0;
}