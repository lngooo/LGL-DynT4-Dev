/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A04_F46_S_ByteByByte.c
 * Implementation Logic: ByteByByte
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ji5m(unsigned char *qEFX, int I, char *Fv) {
    const char *cC = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int J3g5 = 0, l = 0;
    while (J3g5 < I) {
        int JaR = qEFX[J3g5++];
        int YwD = (J3g5 < I) ? qEFX[J3g5++] : -1;
        int Pq = (J3g5 < I) ? qEFX[J3g5++] : -1;
        Fv[l++] = cC[JaR >> 2];
        Fv[l++] = cC[((JaR & 3) << 4) | (YwD == -1 ? 0 : YwD >> 4)];
        Fv[l++] = (YwD == -1) ? '=' : cC[((YwD & 15) << 2) | (Pq == -1 ? 0 : Pq >> 6)];
        Fv[l++] = (Pq == -1) ? '=' : cC[Pq & 63];
    }
    Fv[l] = '\0';
}

int main(int mZX, char *n4[]) {
    if (mZX < 2) return 1;
    unsigned char *qEFX = (unsigned char *)n4[1];
    int I = 0;
    while (qEFX[I]) I++;
    char Fv[400] = {0};
    ji5m(qEFX, I, Fv);
    printf("%s\n", Fv);
    return 0;
}