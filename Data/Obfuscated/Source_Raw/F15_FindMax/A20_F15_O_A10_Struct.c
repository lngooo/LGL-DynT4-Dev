/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A20_F15_O_A10_Struct.c
 * Implementation Logic: Max using temporary comparison struct.
 */
#include <stdio.h>
#include <stdlib.h>

struct e { int Rbly; int jtN; int W; };

int Q(int YDms[], int FGqI) {
    struct e Z3I = {YDms[0], 0, YDms[0]};
    for(int B=1; B<FGqI; B++) {
        Z3I.jtN = YDms[B];
        Z3I.W = (Z3I.jtN > Z3I.W) ? Z3I.jtN : Z3I.W;
    }
    return Z3I.W;
}

int main(int y, char *u2yC[]) {
    if (y < 2) return 0;
    int FGqI = y - 1;
    int *YDms = (int*)malloc(FGqI * sizeof(int));
    for (int B = 0; B < FGqI; B++) YDms[B] = atoi(u2yC[B+1]);
    printf("%d\n", Q(YDms, FGqI));
    free(YDms);
    return 0;
}