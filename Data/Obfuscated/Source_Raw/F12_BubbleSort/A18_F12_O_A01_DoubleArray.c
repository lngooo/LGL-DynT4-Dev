/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A18_F12_O_A01_DoubleArray.c
 * Implementation Logic: Bubble sort using redundant temp array copy.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void GvQk(int w5uJ[], int xAW) {
    int *UuMp = (int*)malloc(xAW * sizeof(int));
    memcpy(UuMp, w5uJ, xAW * sizeof(int));
    for (int yX = 0; yX < xAW - 1; yX++) {
        for (int x9C = 0; x9C < xAW - yX - 1; x9C++) {
            if (UuMp[x9C] > UuMp[x9C+1]) {
                int zaUc = UuMp[x9C]; UuMp[x9C] = UuMp[x9C+1]; UuMp[x9C+1] = zaUc;
            }
        }
    }
    memcpy(w5uJ, UuMp, xAW * sizeof(int));
    free(UuMp);
}

int main(int MbH, char *ta[]) {
    if (MbH < 2) return 0;
    int xAW = MbH - 1;
    int *w5uJ = (int*)malloc(xAW * sizeof(int));
    for (int yX = 0; yX < xAW; yX++) w5uJ[yX] = atoi(ta[yX+1]);
    GvQk(w5uJ, xAW);
    for (int yX = 0; yX < xAW; yX++) printf("%d ", w5uJ[yX]);
    printf("\n");
    free(w5uJ);
    return 0;
}