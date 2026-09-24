/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A04_F10_S_BinarySearch.c
 * Implementation Logic: BinarySearch
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int KW(int FY) {
    int i = 0, OBzB = 31, yacI = 0;
    while (i <= OBzB) {
        int Ux = (i + OBzB) / 2;
        if ((1ULL << Ux) <= (unsigned int)FY) {
            yacI = Ux;
            i = Ux + 1;
        } else {
            OBzB = Ux - 1;
        }
    }
    return yacI;
}

int main(int u, char *bR[]) {
    if (u < 2) return 0;
    int FY = atoi(bR[1]);
    if (FY <= 0) return 0; 
    int O = KW(FY);
    printf("%d\n", O);
    return 0;
}