/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A08_F12_S_CocktailShaker.c
 * Implementation Logic: Bidirectional bubble sort (Cocktail Shaker) (Seed 4).
 */
#include <stdio.h>
#include <stdlib.h>

void H1(int bc[], int u3E) {
    int I7rJ = 0, i8SI = u3E - 1, LM = 1;
    while (LM) {
        LM = 0;
        for (int OVO4 = I7rJ; OVO4 < i8SI; ++OVO4) {
            if (bc[OVO4] > bc[OVO4 + 1]) {
                int HOOI = bc[OVO4]; bc[OVO4] = bc[OVO4+1]; bc[OVO4+1] = HOOI;
                LM = 1;
            }
        }
        if (!LM) break;
        LM = 0;
        --i8SI;
        for (int OVO4 = i8SI - 1; OVO4 >= I7rJ; --OVO4) {
            if (bc[OVO4] > bc[OVO4 + 1]) {
                int HOOI = bc[OVO4]; bc[OVO4] = bc[OVO4+1]; bc[OVO4+1] = HOOI;
                LM = 1;
            }
        }
        ++I7rJ;
    }
}

int main(int wEI, char *Zf[]) {
    if (wEI < 2) return 0;
    int u3E = wEI - 1;
    int *bc = (int*)malloc(u3E * sizeof(int));
    for (int OVO4 = 0; OVO4 < u3E; OVO4++) bc[OVO4] = atoi(Zf[OVO4+1]);
    H1(bc, u3E);
    for (int OVO4 = 0; OVO4 < u3E; OVO4++) printf("%d ", bc[OVO4]);
    printf("\n");
    free(bc);
    return 0;
}