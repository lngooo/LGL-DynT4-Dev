/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A16_F10_O_A01_ArithmeticIdent.c
 * Implementation Logic: ArithmeticIdent
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int g(int AcJJ) {
    int f = 0;
    unsigned int GJn = (unsigned int)AcJJ;
    while (GJn >= 2) {
        GJn = (GJn - (GJn % 2)) / 2;
        f++;
    }
    return f;
}

int main(int vx0d, char *Dv[]) {
    if (vx0d < 2) return 0;
    int AcJJ = atoi(Dv[1]);
    if (AcJJ <= 0) return 0; 
    int TQxT = g(AcJJ);
    printf("%d\n", TQxT);
    return 0;
}