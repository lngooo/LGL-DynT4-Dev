/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A17_F12_O_A16_Switch.c
 * Implementation Logic: BS where swap decision is handled in a switch.
 */
#include <stdio.h>
#include <stdlib.h>

void g(int Iy[], int mH) {
    for (int KO = 0; KO < mH - 1; KO++) {
        for (int JV = 0; JV < mH - KO - 1; JV++) {
            switch (Iy[JV] > Iy[JV + 1]) {
                case 1: { int VgXO = Iy[JV]; Iy[JV] = Iy[JV+1]; Iy[JV+1] = VgXO; break; }
                default: break;
            }
        }
    }
}

int main(int RDS, char *gkYl[]) {
    if (RDS < 2) return 0;
    int mH = RDS - 1;
    int *Iy = (int*)malloc(mH * sizeof(int));
    for (int KO = 0; KO < mH; KO++) Iy[KO] = atoi(gkYl[KO+1]);
    g(Iy, mH);
    for (int KO = 0; KO < mH; KO++) printf("%d ", Iy[KO]);
    printf("\n");
    free(Iy);
    return 0;
}