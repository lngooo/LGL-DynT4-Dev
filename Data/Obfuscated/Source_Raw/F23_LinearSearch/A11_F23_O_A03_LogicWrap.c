/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A11_F23_O_A03_LogicWrap.c
 * Implementation Logic: LogicWrap
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int g(int Seyi[], int k, int C3) {
    if (k <= 0) return -1;
    int c = Seyi[k-1], FkOZ = -1;
    Seyi[k-1] = C3;
    while (Seyi[++FkOZ] != C3);
    Seyi[k-1] = c;
    if (FkOZ == k - 1) return (c == C3) ? FkOZ : -1;
    return FkOZ;
}

int main(int iV3J, char *zash[]) {
    if (iV3J < 3) return 1;
    int C3 = atoi(zash[1]);
    int sU74 = iV3J - 2;
    int Seyi[100];
    for (int FkOZ = 0; FkOZ < sU74; FkOZ++) {
        Seyi[FkOZ] = atoi(zash[FkOZ + 2]);
    }
    int HuN = g(Seyi, sU74, C3);
    printf("%d\n", HuN);
    return 0;
}