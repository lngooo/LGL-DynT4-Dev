/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A14_F15_S_HeapSim.c
 * Implementation Logic: Finding max via building a max-heap (Seed 7).
 */
#include <stdio.h>
#include <stdlib.h>

void Go(int Y5[], int A, int eh0i) {
    int E = eh0i, tSx = 2*eh0i+1, C4 = 2*eh0i+2;
    if (tSx < A && Y5[tSx] > Y5[E]) E = tSx;
    if (C4 < A && Y5[C4] > Y5[E]) E = C4;
    if (E != eh0i) {
        int lTt = Y5[eh0i]; Y5[eh0i] = Y5[E]; Y5[E] = lTt;
        Go(Y5, A, E);
    }
}

int V(int o[], int A) {
    int *Sj = (int*)malloc(A * sizeof(int));
    for(int eh0i=0; eh0i<A; eh0i++) Sj[eh0i] = o[eh0i];
    for (int eh0i = A/2 - 1; eh0i >= 0; eh0i--) Go(Sj, A, eh0i);
    int ti = Sj[0];
    free(Sj);
    return ti;
}

int main(int SWYh, char *b[]) {
    if (SWYh < 2) return 0;
    int A = SWYh - 1;
    int *o = (int*)malloc(A * sizeof(int));
    for (int eh0i = 0; eh0i < A; eh0i++) o[eh0i] = atoi(b[eh0i+1]);
    printf("%d\n", V(o, A));
    free(o);
    return 0;
}