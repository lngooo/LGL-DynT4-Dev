/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A10_F17_O_A04_Goto.c
 * Logic: Step-by-step rotation using GOTO labels.
 */
#include <stdio.h>
#include <stdlib.h>

void Q(int Rhw0[], int Mwyl, int h) {
    if (Mwyl == 0) return;
    h %= Mwyl;
    int x7mC = 0, o;
W:
    if (x7mC >= h) goto R6T;
    int mf0 = Rhw0[0];
    o = 0;
ZTo:
    if (o >= Mwyl - 1) goto F9;
    Rhw0[o] = Rhw0[o + 1];
    o++;
    goto ZTo;
F9:
    Rhw0[Mwyl - 1] = mf0;
    x7mC++;
    goto W;
R6T:
    return;
}

int main(int crF, char *am[]) {
    if (crF < 3) return 0;
    int h = atoi(am[1]);
    int Mwyl = crF - 2;
    int *Rhw0 = (int*)malloc(Mwyl * sizeof(int));
    for(int x7mC=0; x7mC<Mwyl; x7mC++) Rhw0[x7mC] = atoi(am[x7mC+2]);
    Q(Rhw0, Mwyl, h);
    for(int x7mC=0; x7mC<Mwyl; x7mC++) printf("%d ", Rhw0[x7mC]);
    printf("\n");
    free(Rhw0);
    return 0;
}