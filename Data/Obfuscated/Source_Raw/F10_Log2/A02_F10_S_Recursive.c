/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A02_F10_S_Recursive.c
 * Implementation Logic: Recursive
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int E(int Gh) {
    if (Gh <= 1) return 0;
    return 1 + E(Gh / 2);
}

int main(int HtAd, char *im[]) {
    if (HtAd < 2) return 0;
    int Gh = atoi(im[1]);
    if (Gh <= 0) return 0; 
    int AK5 = E(Gh);
    printf("%d\n", AK5);
    return 0;
}