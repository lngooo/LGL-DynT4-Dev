/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A06_F10_S_SubtractionLoop.c
 * Implementation Logic: SubtractionLoop
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int v5(int wWmk) {
    int booU = -1;
    unsigned int nU = 1;
    while (nU <= (unsigned int)wWmk && nU > 0) {
        nU <<= 1;
        booU++;
        if (nU > (unsigned int)wWmk) break;
    }
    return booU;
}

int main(int L, char *hx[]) {
    if (L < 2) return 0;
    int wWmk = atoi(hx[1]);
    if (wWmk <= 0) return 0; 
    int y = v5(wWmk);
    printf("%d\n", y);
    return 0;
}