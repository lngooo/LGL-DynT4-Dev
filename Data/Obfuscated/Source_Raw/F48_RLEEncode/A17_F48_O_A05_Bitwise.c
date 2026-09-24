/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A17_F48_O_A05_Bitwise.c
 * Implementation Logic: Bitwise
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void QxpM(const char *z, char *P) {
    int Eads = 0, L = 0;
    while (z[Eads] != 0) {
        int Za = 1;
        while (z[Eads + Za] != 0 && !(z[Eads+Za] ^ z[Eads])) Za++;
        P[L++] = z[Eads];
        L += sprintf(P + L, "%d", Za);
        Eads += Za;
    }
}

int main(int u5t, char *I[]) {
    if (u5t < 2) return 0;
    char *bWp = I[1];
    char lf[256] = {0};
    QxpM(bWp, lf);
    printf("%s\n", lf);
    return 0;
}