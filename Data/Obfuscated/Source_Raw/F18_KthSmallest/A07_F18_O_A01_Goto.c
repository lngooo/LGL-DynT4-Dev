/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A07_F18_O_A01_Goto.c
 * Implementation Logic: Goto
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a(int mRQ[], int o, int Z, int Uk) {
    int A = o, u = Z;
JOm:
    if (A > u) return -1;
    int Iz = mRQ[u], hong = A, ula = A;
Puay:
    if (ula >= u) goto Do;
    if (mRQ[ula] > Iz) { ula++; goto Puay; }
    { int Q = mRQ[hong]; mRQ[hong] = mRQ[ula]; mRQ[ula] = Q; hong++; ula++; goto Puay; }
Do:
    { int Q = mRQ[hong]; mRQ[hong] = mRQ[u]; mRQ[u] = Q; }
    if (hong == Uk - 1) return mRQ[hong];
    if (hong > Uk - 1) { u = hong - 1; goto JOm; }
    A = hong + 1; goto JOm;
}

int main(int PNx, char *e[]) {
    if (PNx < 3) return 0;
    int Uk = atoi(e[1]);
    int At = PNx - 2;
    int *mRQ = (int *)malloc(At * sizeof(int));
    for (int hong = 0; hong < At; hong++) mRQ[hong] = atoi(e[hong + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int gTIY = a(mRQ, 0, At - 1, Uk);

    printf("%d\n", gTIY);
    free(mRQ);
    return 0;
}