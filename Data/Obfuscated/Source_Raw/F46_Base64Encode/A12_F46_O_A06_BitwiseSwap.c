/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A12_F46_O_A06_BitwiseSwap.c
 * Implementation Logic: BitwiseSwap
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void qa(unsigned char *YbR, int Em, char *Vf95) {
    const char *M2C = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for(int qXau=0; qXau<Em; qXau+=3) {
        unsigned int RP = (YbR[qXau] << 16) ^ ((qXau+1<Em?YbR[qXau+1]:0) << 8) ^ (qXau+2<Em?YbR[qXau+2]:0);
        Vf95[(qXau/3)*4] = M2C[(RP >> 18) & 63];
        Vf95[(qXau/3)*4+1] = M2C[(RP >> 12) & 63];
        Vf95[(qXau/3)*4+2] = (qXau+1 < Em) ? M2C[(RP >> 6) & 63] : '=';
        Vf95[(qXau/3)*4+3] = (qXau+2 < Em) ? M2C[RP & 63] : '=';
    }
    Vf95[((Em+2)/3)*4] = 0;
}

int main(int ACd, char *GM4D[]) {
    if (ACd < 2) return 1;
    unsigned char *YbR = (unsigned char *)GM4D[1];
    int Em = 0;
    while (YbR[Em]) Em++;
    char Vf95[400] = {0};
    qa(YbR, Em, Vf95);
    printf("%s\n", Vf95);
    return 0;
}