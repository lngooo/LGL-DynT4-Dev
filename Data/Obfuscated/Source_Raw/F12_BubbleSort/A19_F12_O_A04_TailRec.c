/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A19_F12_O_A04_TailRec.c
 * Implementation Logic: Bubble sort as tail-recursive single-pass helper.
 */
#include <stdio.h>
#include <stdlib.h>

void on2(int bX0[], int JGJ) {
    if (JGJ <= 1) return;
    for (int gc = 0; gc < JGJ - 1; gc++) {
        if (bX0[gc] > bX0[gc+1]) {
            int wjiq = bX0[gc]; bX0[gc] = bX0[gc+1]; bX0[gc+1] = wjiq;
        }
    }
    on2(bX0, JGJ - 1);
}

void Lpo(int bX0[], int JGJ) {
    on2(bX0, JGJ);
}

int main(int Ztf, char *K6nU[]) {
    if (Ztf < 2) return 0;
    int JGJ = Ztf - 1;
    int *bX0 = (int*)malloc(JGJ * sizeof(int));
    for (int gc = 0; gc < JGJ; gc++) bX0[gc] = atoi(K6nU[gc+1]);
    Lpo(bX0, JGJ);
    for (int gc = 0; gc < JGJ; gc++) printf("%d ", bX0[gc]);
    printf("\n");
    free(bX0);
    return 0;
}