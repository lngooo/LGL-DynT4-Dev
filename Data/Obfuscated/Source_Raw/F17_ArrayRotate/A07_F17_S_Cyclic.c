/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A07_F17_S_Cyclic.c
 * Logic: Keep track of count of elements moved to achieve O(n) in one pass.
 */
#include <stdio.h>
#include <stdlib.h>

void ARk(int N[], int lbT, int t) {
    if (lbT == 0) return;
    t = t % lbT;
    if (t == 0) return;
    int gujA = 0;
    for (int qy8 = 0; gujA < lbT; qy8++) {
        int d = qy8;
        int pW = N[qy8];
        do {
            int FG = (d - t + lbT) % lbT;
            int hrdu = N[FG];
            N[FG] = pW;
            pW = hrdu;
            d = FG;
            gujA++;
        } while (qy8 != d);
    }
}

int main(int JAeE, char *A[]) {
    if (JAeE < 3) return 0;
    int t = atoi(A[1]);
    int lbT = JAeE - 2;
    int *N = (int*)malloc(lbT * sizeof(int));
    for(int br=0; br<lbT; br++) N[br] = atoi(A[br+2]);
    ARk(N, lbT, t);
    for(int br=0; br<lbT; br++) printf("%d ", N[br]);
    printf("\n");
    free(N);
    return 0;
}