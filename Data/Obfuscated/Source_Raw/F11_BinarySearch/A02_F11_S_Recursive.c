/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A02_F11_S_Recursive.c
 * Implementation Logic: Classic recursive divide and conquer.
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>

int SQd(int yA9Y[], int Jda, int mN3, int o6OT) {
    if (Jda > mN3) return -1;
    int WLI = Jda + (mN3 - Jda) / 2;
    if (yA9Y[WLI] == o6OT) return WLI;
    if (yA9Y[WLI] < o6OT) return SQd(yA9Y, WLI + 1, mN3, o6OT);
    return SQd(yA9Y, Jda, WLI - 1, o6OT);
}

int XU(int yA9Y[], int sC, int o6OT) {
    return SQd(yA9Y, 0, sC - 1, o6OT);
}

int main(int Re, char *lV[]) {
    if (Re < 3) return 1;
    int o6OT = atoi(lV[1]);
    int sC = Re - 2;
    int *yA9Y = (int*)malloc(sC * sizeof(int));
    for(int y=0; y<sC; y++) yA9Y[y] = atoi(lV[y+2]);
    printf("%d\n", XU(yA9Y, sC, o6OT));
    free(yA9Y);
    return 0;
}