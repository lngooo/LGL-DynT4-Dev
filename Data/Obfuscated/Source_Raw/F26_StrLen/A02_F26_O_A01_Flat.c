/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A02_F26_O_A01_Flat.c
 * Implementation Logic: Iterative count with control flow flattening.
 */
#include <stdio.h>

int h(const char *DA25) {
    int i2MZ = 0, t = 0;
    while (t != 2) {
        switch (t) {
            case 0: if (DA25[i2MZ] != '\0') t = 1; else t = 2; break;
            case 1: i2MZ++; t = 0; break;
        }
    }
    return i2MZ;
}

int main(int E55q, char *uQ[]) {
    if (E55q < 2) return 0;
    printf("%d\n", h(uQ[1]));
    return 0;
}