/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A08_F47_O_A01_CFP.c
 * Implementation Logic: CFP
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void k(char *p7, char *fsK) {
    int Ma = 0, M = 0, zk1S = 0;
    while(fsK[zk1S]) zk1S++;
    while(Ma != 2) {
        switch(Ma) {
            case 0: Ma = (p7[M] == 0) ? 2 : 1; break;
            case 1: p7[M] ^= fsK[M % zk1S]; M++; Ma = 0; break;
        }
    }
}

int main(int ciAz, char *q[]) {
    if (ciAz < 3) return 0;
    char *p7 = q[1];
    char *fsK = q[2];
    int d9L = 0;
    while (p7[d9L]) d9L++;

    k(p7, fsK);

    for (int M = 0; M < d9L; M++) {
        printf("%02x", (unsigned char)p7[M]);
    }
    printf("\n");
    return 0;
}