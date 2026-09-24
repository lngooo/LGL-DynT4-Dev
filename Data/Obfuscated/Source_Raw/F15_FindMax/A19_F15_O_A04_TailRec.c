/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A19_F15_O_A04_TailRec.c
 * Implementation Logic: Tail-recursive linear scan.
 */
#include <stdio.h>
#include <stdlib.h>

int ex(int vm[], int ho1B, int rWTX, int WYZ) {
    if (rWTX == ho1B) return WYZ;
    return ex(vm, ho1B, rWTX + 1, (vm[rWTX] > WYZ ? vm[rWTX] : WYZ));
}

int wEQM(int FGrj[], int ho1B) { return ex(FGrj, ho1B, 0, FGrj[0]); }

int main(int ghqF, char *oO8i[]) {
    if (ghqF < 2) return 0;
    int ho1B = ghqF - 1;
    int *FGrj = (int*)malloc(ho1B * sizeof(int));
    for (int g = 0; g < ho1B; g++) FGrj[g] = atoi(oO8i[g+1]);
    printf("%d\n", wEQM(FGrj, ho1B));
    free(FGrj);
    return 0;
}