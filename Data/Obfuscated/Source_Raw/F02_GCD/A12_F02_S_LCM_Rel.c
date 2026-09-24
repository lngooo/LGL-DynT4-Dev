/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A12_F02_S_LCM_Rel.c
 * Implementation Logic: Using GCD = (a*b)/LCM relation (Seed 6).
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int BFb(int vQRZ, int Uk1D) {
    vQRZ = abs(vQRZ); Uk1D = abs(Uk1D);
    if (vQRZ == 0 || Uk1D == 0) return vQRZ | Uk1D;
    long long NI = (long long)vQRZ * Uk1D;
    int z = (vQRZ > Uk1D) ? vQRZ : Uk1D;
    long long f = z;
    while (f % vQRZ != 0 || f % Uk1D != 0) f += z;
    return (int)(NI / f);
}

int main(int i3Dl, char *q[]) {
    if (i3Dl < 3) return 1;
    printf("%d\n", BFb(atoi(q[1]), atoi(q[2])));
    return 0;
}