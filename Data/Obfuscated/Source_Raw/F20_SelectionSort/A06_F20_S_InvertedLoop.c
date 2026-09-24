/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A06_F20_S_InvertedLoop.c
 * Implementation Logic: InvertedLoop
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void VGgG(int bL[], int EL32) {
    for (int s = EL32 - 1; s > 0; s--) {
        int jR = s;
        for (int f4Of = 0; f4Of < s; f4Of++) {
            if (bL[f4Of] > bL[jR]) jR = f4Of;
        }
        int nZ = bL[s]; bL[s] = bL[jR]; bL[jR] = nZ;
    }
}

int main(int XT, char *GH[]) {
    if (XT < 2) return 0;
    int EL32 = XT - 1;
    int *bL = (int *)malloc(EL32 * sizeof(int));
    for (int s = 0; s < EL32; s++) bL[s] = atoi(GH[s + 1]);

    VGgG(bL, EL32);

    for (int s = 0; s < EL32; s++) {
        printf("%d%s", bL[s], (s == EL32 - 1 ? "" : " "));
    }
    printf("\n");
    free(bL);
    return 0;
}