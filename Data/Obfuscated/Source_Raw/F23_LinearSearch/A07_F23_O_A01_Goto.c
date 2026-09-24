/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A07_F23_O_A01_Goto.c
 * Implementation Logic: Goto
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int H(int xI[], int k1, int TosZ) {
    int xv = 0;
nJUp:
    if (xv >= k1) goto c;
    if (xI[xv] == TosZ) goto W;
    xv++;
    goto nJUp;
W:
    return xv;
c:
    return -1;
}

int main(int G, char *YFck[]) {
    if (G < 3) return 1;
    int TosZ = atoi(YFck[1]);
    int tbo = G - 2;
    int xI[100];
    for (int xv = 0; xv < tbo; xv++) {
        xI[xv] = atoi(YFck[xv + 2]);
    }
    int cr = H(xI, tbo, TosZ);
    printf("%d\n", cr);
    return 0;
}