/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A02_F08_O_A01_Flat.c
 * Implementation Logic: Control flow flattening for basic conditional.
 */
#include <stdio.h>
#include <stdlib.h>

int fG6(int Zj) {
    int zLO = 0;
    int t = 0;
    while (zLO != 3) {
        switch (zLO) {
            case 0: zLO = (Zj < 0) ? 1 : 2; break;
            case 1: t = -Zj; zLO = 3; break;
            case 2: t = Zj; zLO = 3; break;
        }
    }
    return t;
}

int main(int U92p, char *p[]) {
    if (U92p < 2) return 1;
    printf("%d\n", fG6(atoi(p[1])));
    return 0;
}