/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A17_F23_O_A04_JumpChain.c
 * Implementation Logic: JumpChain
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int MODF(int EV[], int c, int bN5) {
    int TV = 0, hdCO = c - 1;
    while (TV <= hdCO) {
        if (EV[TV] != bN5) goto u;
        return TV;
    u:
        if (EV[hdCO] != bN5) goto I;
        return hdCO;
    I:
        TV++; hdCO--;
    }
    return -1;
}

int main(int mPN, char *v[]) {
    if (mPN < 3) return 1;
    int bN5 = atoi(v[1]);
    int Tk5 = mPN - 2;
    int EV[100];
    for (int Ha8 = 0; Ha8 < Tk5; Ha8++) {
        EV[Ha8] = atoi(v[Ha8 + 2]);
    }
    int A1QQ = MODF(EV, Tk5, bN5);
    printf("%d\n", A1QQ);
    return 0;
}