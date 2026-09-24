/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A09_F43_O_A01_Flattening.c
 * Implementation Logic: Control Flow Flattening derived from A01 using a dispatcher switch.
 */
#include <stdio.h>
#include <stdlib.h>

int S(unsigned int p0) {
    int B7 = 1;
    int G = 0;
    while (B7 != 0) {
        switch (B7) {
            case 1:
                B7 = (p0 == 0) ? 2 : 3;
                break;
            case 2:
                G = 0; B7 = 0;
                break;
            case 3:
                G = ((p0 & (p0 - 1)) == 0);
                B7 = 0;
                break;
        }
    }
    return G;
}

int main(int GI4l, char* w[]) {
    if (GI4l < 2) return 0;
    unsigned int p0 = (unsigned int)strtoul(w[1], NULL, 10);
    printf("%d", S(p0));
    return 0;
}