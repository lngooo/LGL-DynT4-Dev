/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A09_F14_O_A01_Flattening.c
 * Implementation Logic: Control flow flattening for A01.
 */
#include <stdio.h>
#include <stdlib.h>

void A(int H[], int R) {
    int woUs = 0, mcb = R - 1, d = 0;
    while (d != -1) {
        switch (d) {
            case 0: d = (woUs < mcb) ? 1 : 2; break;
            case 1: { int MO = H[woUs]; H[woUs] = H[mcb]; H[mcb] = MO; woUs++; mcb--; d = 0; break; }
            case 2: d = -1; break;
        }
    }
}

int main(int T, char *f[]) {
    if (T < 2) return 0;
    int R = T - 1;
    int *H = (int*)malloc(R * sizeof(int));
    for(int yQ=0; yQ<R; yQ++) H[yQ] = atoi(f[yQ+1]);
    A(H, R);
    for(int yQ=0; yQ<R; yQ++) printf("%d ", H[yQ]);
    printf("\n");
    free(H);
    return 0;
}