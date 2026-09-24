/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A02_F17_S_Juggling.c
 * Logic: Divide array into GCD(n, k) sets and rotate elements within sets.
 */
#include <stdio.h>
#include <stdlib.h>

int Ty(int gu, int Xx) {
    return Xx == 0 ? gu : Ty(Xx, gu % Xx);
}

void gjTB(int ffdB[], int En, int exRH) {
    if (En == 0) return;
    exRH = exRH % En;
    int LJHX = Ty(exRH, En);
    for (int qLFO = 0; qLFO < LJHX; qLFO++) {
        int CS78 = ffdB[qLFO];
        int UA0k = qLFO;
        while (1) {
            int Gi = (UA0k + exRH) % En;
            if (Gi == qLFO) break;
            ffdB[UA0k] = ffdB[Gi];
            UA0k = Gi;
        }
        ffdB[UA0k] = CS78;
    }
}

int main(int TDi9, char *S[]) {
    if (TDi9 < 3) return 0;
    int exRH = atoi(S[1]);
    int En = TDi9 - 2;
    int *ffdB = (int*)malloc(En * sizeof(int));
    for(int qLFO=0; qLFO<En; qLFO++) ffdB[qLFO] = atoi(S[qLFO+2]);
    gjTB(ffdB, En, exRH);
    for(int qLFO=0; qLFO<En; qLFO++) printf("%d ", ffdB[qLFO]);
    printf("\n");
    free(ffdB);
    return 0;
}