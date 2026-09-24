/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A21_F10_O_A01_Bitfield.c
 * Implementation Logic: Bitfield
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int TP(int GI) {
    int ThW = 0;
    while (GI > 1) {
        GI &= ~0; 
        GI >>= 1;
        ThW++;
    }
    return ThW;
}

int main(int JEL, char *RV51[]) {
    if (JEL < 2) return 0;
    int GI = atoi(RV51[1]);
    if (GI <= 0) return 0; 
    int BZa = TP(GI);
    printf("%d\n", BZa);
    return 0;
}