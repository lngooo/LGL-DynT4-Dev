/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A04_F48_S_BufferStep.c
 * Implementation Logic: BufferStep
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void PG(const char *v, char *m) {
    int XchE = strlen(v);
    if (XchE == 0) return;
    char M = v[0];
    int AO = 0, cC4 = 0;
    for (int G = 0; G <= XchE; G++) {
        if (v[G] == M && G < XchE) {
            AO++;
        } else {
            cC4 += sprintf(m + cC4, "%c%d", M, AO);
            if (G < XchE) { M = v[G]; AO = 1; }
        }
    }
}

int main(int H, char *D[]) {
    if (H < 2) return 0;
    char *zj = D[1];
    char M8[256] = {0};
    PG(zj, M8);
    printf("%s\n", M8);
    return 0;
}