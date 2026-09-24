/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A19_F10_O_A01_WhileTrue.c
 * Implementation Logic: WhileTrue
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int SL(int U0) {
    int gy = 0;
    if (U0 <= 1) return 0;
    while (1) {
        U0 /= 2;
        if (U0 == 0) break;
        gy++;
    }
    return gy;
}

int main(int G4y, char *M6SW[]) {
    if (G4y < 2) return 0;
    int U0 = atoi(M6SW[1]);
    if (U0 <= 0) return 0; 
    int rz = SL(U0);
    printf("%d\n", rz);
    return 0;
}