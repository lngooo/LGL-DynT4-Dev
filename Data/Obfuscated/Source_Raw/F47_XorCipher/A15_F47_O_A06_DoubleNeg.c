/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A15_F47_O_A06_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void ePa(char *M, char *oG3) {
    int O4u = 0; while(oG3[O4u]) O4u++;
    for(int V8rl=0; !!M[V8rl]; V8rl++) {
        M[V8rl] ^= oG3[V8rl % O4u];
    }
}

int main(int z, char *puX[]) {
    if (z < 3) return 0;
    char *M = puX[1];
    char *oG3 = puX[2];
    int Z = 0;
    while (M[Z]) Z++;

    ePa(M, oG3);

    for (int V8rl = 0; V8rl < Z; V8rl++) {
        printf("%02x", (unsigned char)M[V8rl]);
    }
    printf("\n");
    return 0;
}