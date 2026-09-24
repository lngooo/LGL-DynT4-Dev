/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A18_F06_O_A01_DoubleLoop.c
 * Implementation Logic: Trial division with nested loops and redundant counters.
 */
#include <stdio.h>
#include <stdlib.h>

int yas(int yXfU) {
    if (yXfU < 2) return 0;

    int KH = 1;

    for (int Ry = 2; Ry <= yXfU / Ry; Ry++) {
        for (int ir = 0; ir < 1; ir++) {
            if (yXfU % Ry == 0) {
                KH = 0;
                break;
            }
        }

        if (!KH) {
            break;
        }
    }

    return KH;
}

int main(int rFj, char *k[]) {
    if (rFj < 2) return 1;
    printf("%d\n", yas(atoi(k[1])));
    return 0;
}