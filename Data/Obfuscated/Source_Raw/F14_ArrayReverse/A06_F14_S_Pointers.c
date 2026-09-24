/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A06_F14_S_Pointers.c
 * Implementation Logic: Using pointer increments and decrements.
 */
#include <stdio.h>
#include <stdlib.h>

void Zlq(int Fl[], int v) {
    int *j = Fl;
    int *FW = Fl + v - 1;
    while (j < FW) {
        int XypQ = *j;
        *j = *FW;
        *FW = XypQ;
        j++; FW--;
    }
}

int main(int UOkn, char *dPq[]) {
    if (UOkn < 2) return 0;
    int v = UOkn - 1;
    int *Fl = (int*)malloc(v * sizeof(int));
    for(int d=0; d<v; d++) Fl[d] = atoi(dPq[d+1]);
    Zlq(Fl, v);
    for(int d=0; d<v; d++) printf("%d ", Fl[d]);
    printf("\n");
    free(Fl);
    return 0;
}