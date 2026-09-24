/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A03_F47_S_Pointer.c
 * Implementation Logic: Pointer
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Euj(char *qyg5, char *Sb) {
    char *hCZX = qyg5, *ba = Sb;
    while (*hCZX) {
        if (!*ba) ba = Sb;
        *hCZX ^= *ba;
        hCZX++; ba++;
    }
}

int main(int QV, char *u3i[]) {
    if (QV < 3) return 0;
    char *qyg5 = u3i[1];
    char *Sb = u3i[2];
    int dmk = 0;
    while (qyg5[dmk]) dmk++;

    Euj(qyg5, Sb);

    for (int e = 0; e < dmk; e++) {
        printf("%02x", (unsigned char)qyg5[e]);
    }
    printf("\n");
    return 0;
}