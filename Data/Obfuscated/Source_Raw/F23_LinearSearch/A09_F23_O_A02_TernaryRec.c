/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A09_F23_O_A02_TernaryRec.c
 * Implementation Logic: TernaryRec
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sBfo(int JrEs[], int yb, int Uz8x) {
    if (yb <= 0) return -1;
    int C = (JrEs[0] == Uz8x) ? 0 : -2;
    if (C == 0) return 0;
    C = sBfo(JrEs + 1, yb - 1, Uz8x);
    return (C == -1) ? -1 : C + 1;
}

int main(int Kb, char *XoCx[]) {
    if (Kb < 3) return 1;
    int Uz8x = atoi(XoCx[1]);
    int KgPt = Kb - 2;
    int JrEs[100];
    for (int jZO = 0; jZO < KgPt; jZO++) {
        JrEs[jZO] = atoi(XoCx[jZO + 2]);
    }
    int g = sBfo(JrEs, KgPt, Uz8x);
    printf("%d\n", g);
    return 0;
}