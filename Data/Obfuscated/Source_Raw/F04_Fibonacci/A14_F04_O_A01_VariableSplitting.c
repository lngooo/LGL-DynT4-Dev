/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A14_F04_O_A01_VariableSplitting.c
 * Implementation Logic: VariableSplitting
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long A(int RUp) {
    long NsWV = 0, oIpt = 0, mxR8 = 1, DXsX = 0;
    if (RUp == 0) return 0;
    for (int GHA9 = 2; GHA9 <= RUp; GHA9++) {
        long mZ = (NsWV + oIpt) + (mxR8 + DXsX);
        NsWV = mxR8; oIpt = DXsX;
        mxR8 = mZ; DXsX = 0;
    }
    return (RUp == 1) ? 1 : (mxR8 + DXsX);
}

int main(int qd, char *xJ7g[]) {
    if (qd < 2) {
        return 1;
    }
    int RUp = atoi(xJ7g[1]);
    if (RUp < 0) {
        printf("0\n");
        return 0;
    }
    long s = A(RUp);
    printf("%ld\n", s);
    return 0;
}
