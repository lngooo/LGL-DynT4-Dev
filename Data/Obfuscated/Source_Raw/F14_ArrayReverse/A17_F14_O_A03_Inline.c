/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A17_F14_O_A03_Inline.c
 * Implementation Logic: Midpoint swap with inline arithmetic.
 */
#include <stdio.h>
#include <stdlib.h>

void M(int TF[], int O) {
    for (int wAa = 0; wAa < (O >> 1); wAa++) {
        TF[wAa] += TF[O - 1 - wAa];
        TF[O - 1 - wAa] = TF[wAa] - TF[O - 1 - wAa];
        TF[wAa] = TF[wAa] - TF[O - 1 - wAa];
    }
}

int main(int mh, char *N[]) {
    if (mh < 2) return 0;
    int O = mh - 1;
    int *TF = (int*)malloc(O * sizeof(int));
    for(int wAa=0; wAa<O; wAa++) TF[wAa] = atoi(N[wAa+1]);
    M(TF, O);
    for(int wAa=0; wAa<O; wAa++) printf("%d ", TF[wAa]);
    printf("\n");
    free(TF);
    return 0;
}