/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A21_F47_O_A04_Step.c
 * Implementation Logic: Step
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void S(char *dqP2, char *WSWe) {
    int RUCb = 0, znl1 = 0;
    while(dqP2[RUCb]) RUCb++; while(WSWe[znl1]) znl1++;
    int W = 0;
    while(W < RUCb) {
        dqP2[W] ^= WSWe[W % znl1];
        W++;
    }
}

int main(int z, char *K7[]) {
    if (z < 3) return 0;
    char *dqP2 = K7[1];
    char *WSWe = K7[2];
    int E = 0;
    while (dqP2[E]) E++;

    S(dqP2, WSWe);

    for (int ZL = 0; ZL < E; ZL++) {
        printf("%02x", (unsigned char)dqP2[ZL]);
    }
    printf("\n");
    return 0;
}