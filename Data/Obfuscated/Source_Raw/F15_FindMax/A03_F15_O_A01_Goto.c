/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A03_F15_O_A01_Goto.c
 * Implementation Logic: Linear scan using goto labels.
 */
#include <stdio.h>
#include <stdlib.h>

int TOa3(int y[], int Hcs) {
    int WrS8 = 1, YR = y[0];
N:
    if (WrS8 >= Hcs) goto V7d;
    if (y[WrS8] <= YR) goto dhy;
    YR = y[WrS8];
dhy:
    WrS8++;
    goto N;
V7d:
    return YR;
}

int main(int DNc, char *xlP[]) {
    if (DNc < 2) return 0;
    int Hcs = DNc - 1;
    int *y = (int*)malloc(Hcs * sizeof(int));
    for (int WrS8 = 0; WrS8 < Hcs; WrS8++) y[WrS8] = atoi(xlP[WrS8+1]);
    printf("%d\n", TOa3(y, Hcs));
    free(y);
    return 0;
}