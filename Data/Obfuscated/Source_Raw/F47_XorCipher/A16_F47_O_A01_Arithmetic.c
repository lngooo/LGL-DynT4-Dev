/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A16_F47_O_A01_Arithmetic.c
 * Implementation Logic: Arithmetic
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void L(char *EI, char *q) {
    int dtF2 = 0; while(q[dtF2]) dtF2++;
    int Vgso = 0;
    while(EI[Vgso]) {
        unsigned char G96H = EI[Vgso], rnD = q[Vgso % dtF2];
        EI[Vgso] = (char)(G96H + rnD - 2 * (G96H & rnD)); // XOR identity: a+b-2(a&b)
        Vgso++;
    }
}

int main(int z, char *fIWC[]) {
    if (z < 3) return 0;
    char *EI = fIWC[1];
    char *q = fIWC[2];
    int Aq5 = 0;
    while (EI[Aq5]) Aq5++;

    L(EI, q);

    for (int Vgso = 0; Vgso < Aq5; Vgso++) {
        printf("%02x", (unsigned char)EI[Vgso]);
    }
    printf("\n");
    return 0;
}