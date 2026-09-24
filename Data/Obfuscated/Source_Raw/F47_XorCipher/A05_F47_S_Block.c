/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A05_F47_S_Block.c
 * Implementation Logic: Block
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void T0(char *OZR, char *S7I) {
    int L = 0, V7 = 0;
    while(OZR[L]) L++; while(S7I[V7]) V7++;
    for(int t=0; t < L; t += V7) {
        for(int FcBF=0; FcBF < V7 && (t+FcBF) < L; FcBF++) {
            OZR[t+FcBF] ^= S7I[FcBF];
        }
    }
}

int main(int Km9n, char *Wk[]) {
    if (Km9n < 3) return 0;
    char *OZR = Wk[1];
    char *S7I = Wk[2];
    int wgw3 = 0;
    while (OZR[wgw3]) wgw3++;

    T0(OZR, S7I);

    for (int t = 0; t < wgw3; t++) {
        printf("%02x", (unsigned char)OZR[t]);
    }
    printf("\n");
    return 0;
}