/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A13_F14_O_A01_VarSplit.c
 * Implementation Logic: Indices split into base and offset.
 */
#include <stdio.h>
#include <stdlib.h>

void gOSw(int f4OC[], int ic) {
    int bU = 0, Fy = 0;
    int Y = ic - 1, FI9 = 0;
    while ((bU + Fy) < (Y + FI9)) {
        int bcvd = bU + Fy;
        int YUc = Y + FI9;
        int hnZP = f4OC[bcvd];
        f4OC[bcvd] = f4OC[YUc];
        f4OC[YUc] = hnZP;
        Fy++;
        FI9--;
    }
}

int main(int R33I, char *VL[]) {
    if (R33I < 2) return 0;
    int ic = R33I - 1;
    int *f4OC = (int*)malloc(ic * sizeof(int));
    for(int ec=0; ec<ic; ec++) f4OC[ec] = atoi(VL[ec+1]);
    gOSw(f4OC, ic);
    for(int ec=0; ec<ic; ec++) printf("%d ", f4OC[ec]);
    printf("\n");
    free(f4OC);
    return 0;
}