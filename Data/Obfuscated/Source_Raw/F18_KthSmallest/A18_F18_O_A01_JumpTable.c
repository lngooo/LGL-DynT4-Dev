/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A18_F18_O_A01_JumpTable.c
 * Implementation Logic: JumpTable
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i2u(int KVat[], int L, int yB, int XxZ) {
    if (L > yB) return -1;
    int HQ = KVat[yB], gz = L;
    for (int I = L; I < yB; I++) if (KVat[I] <= HQ) { int uj08=KVat[gz]; KVat[gz]=KVat[I]; KVat[I]=uj08; gz++; }
    int uj08=KVat[gz]; KVat[gz]=KVat[yB]; KVat[yB]=uj08;
    int oFR = gz - (XxZ - 1);
    if (oFR == 0) return KVat[gz];
    goto *(&&jMsj + (oFR > 0 ? 0 : (&&M - &&jMsj)));
jMsj:
    return i2u(KVat, L, gz - 1, XxZ);
M:
    return i2u(KVat, gz + 1, yB, XxZ);
}

int main(int tGS, char *O1nF[]) {
    if (tGS < 3) return 0;
    int XxZ = atoi(O1nF[1]);
    int T9y = tGS - 2;
    int *KVat = (int *)malloc(T9y * sizeof(int));
    for (int gz = 0; gz < T9y; gz++) KVat[gz] = atoi(O1nF[gz + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int Z = i2u(KVat, 0, T9y - 1, XxZ);

    printf("%d\n", Z);
    free(KVat);
    return 0;
}