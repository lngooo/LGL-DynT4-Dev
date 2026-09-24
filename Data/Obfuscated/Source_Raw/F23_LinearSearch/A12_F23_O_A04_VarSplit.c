/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A12_F23_O_A04_VarSplit.c
 * Implementation Logic: VarSplit
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int KPk(int sH[], int ZN, int HMq) {
    int Dn7v = 0, kH = ZN - 1;
    while (Dn7v <= kH) {
        int auAl = sH[Dn7v];
        int Ee = sH[kH];
        if (auAl == HMq) return Dn7v;
        if (Ee == HMq) return kH;
        Dn7v += 1; kH -= 1;
    }
    return -1;
}

int main(int t, char *mS[]) {
    if (t < 3) return 1;
    int HMq = atoi(mS[1]);
    int I = t - 2;
    int sH[100];
    for (int vgdN = 0; vgdN < I; vgdN++) {
        sH[vgdN] = atoi(mS[vgdN + 2]);
    }
    int Mkew = KPk(sH, I, HMq);
    printf("%d\n", Mkew);
    return 0;
}