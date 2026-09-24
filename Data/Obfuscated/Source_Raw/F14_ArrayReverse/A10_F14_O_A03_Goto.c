/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A10_F14_O_A03_Goto.c
 * Implementation Logic: Loop of A03 using goto.
 */
#include <stdio.h>
#include <stdlib.h>

void hS(int qs[], int Q7eO) {
    int rXBS = 0;
qkX:
    if (rXBS >= Q7eO / 2) goto r;
    int y = qs[rXBS];
    qs[rXBS] = qs[Q7eO - 1 - rXBS];
    qs[Q7eO - 1 - rXBS] = y;
    rXBS++;
    goto qkX;
r:
    return;
}

int main(int vdq9, char *lCe[]) {
    if (vdq9 < 2) return 0;
    int Q7eO = vdq9 - 1;
    int *qs = (int*)malloc(Q7eO * sizeof(int));
    for(int rXBS=0; rXBS<Q7eO; rXBS++) qs[rXBS] = atoi(lCe[rXBS+1]);
    hS(qs, Q7eO);
    for(int rXBS=0; rXBS<Q7eO; rXBS++) printf("%d ", qs[rXBS]);
    printf("\n");
    free(qs);
    return 0;
}