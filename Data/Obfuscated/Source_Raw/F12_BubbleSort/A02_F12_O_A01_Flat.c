/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A02_F12_O_A01_Flat.c
 * Implementation Logic: Control flow flattening for nested loops.
 */
#include <stdio.h>
#include <stdlib.h>

void E8Ic(int z3R[], int Dh) {
    int uSaa = 0, yL = 0, u = 0;
    while (u != 4) {
        switch (u) {
            case 0: if (uSaa < Dh - 1) { yL = 0; u = 1; } else u = 4; break;
            case 1: if (yL < Dh - uSaa - 1) u = 2; else { uSaa++; u = 0; } break;
            case 2: 
                if (z3R[yL] > z3R[yL + 1]) {
                    int N3q = z3R[yL]; z3R[yL] = z3R[yL+1]; z3R[yL+1] = N3q;
                }
                yL++; u = 1; break;
        }
    }
}

int main(int Jq, char *rE[]) {
    if (Jq < 2) return 0;
    int Dh = Jq - 1;
    int *z3R = (int*)malloc(Dh * sizeof(int));
    for (int uSaa = 0; uSaa < Dh; uSaa++) z3R[uSaa] = atoi(rE[uSaa+1]);
    E8Ic(z3R, Dh);
    for (int uSaa = 0; uSaa < Dh; uSaa++) printf("%d ", z3R[uSaa]);
    printf("\n");
    free(z3R);
    return 0;
}