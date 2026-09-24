/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A12_F47_O_A01_Unroll.c
 * Implementation Logic: Unroll
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void ti8m(char *y, char *r50) {
    int h6V = 0, Dl = 0; while(r50[h6V]) h6V++;
    while(y[Dl] && y[Dl+1]) {
        y[Dl] ^= r50[Dl % h6V];
        y[Dl+1] ^= r50[(Dl+1) % h6V];
        Dl += 2;
    }
    if(y[Dl]) y[Dl] ^= r50[Dl % h6V];
}

int main(int EQ5y, char *E8A[]) {
    if (EQ5y < 3) return 0;
    char *y = E8A[1];
    char *r50 = E8A[2];
    int B = 0;
    while (y[B]) B++;

    ti8m(y, r50);

    for (int Dl = 0; Dl < B; Dl++) {
        printf("%02x", (unsigned char)y[Dl]);
    }
    printf("\n");
    return 0;
}