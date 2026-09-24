/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A18_F22_O_A04_PtrOffset.c
 * Implementation Logic: PtrOffset
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ysv(int hfA[], int GjKF) {
    for (int l4 = 1; l4 < GjKF; l4++) {
        int akhA = *(hfA + l4);
        int WJT = l4 - 1;
        while (WJT >= 0 && *(hfA + WJT) > akhA) {
            *(hfA + WJT + 1) = *(hfA + WJT);
            WJT--;
        }
        *(hfA + WJT + 1) = akhA;
    }
}

int main(int Vgi3, char *B[]) {
    if (Vgi3 < 2) return 0;
    int GjKF = Vgi3 - 1;
    int *hfA = (int *)malloc(GjKF * sizeof(int));
    for (int l4 = 0; l4 < GjKF; l4++) hfA[l4] = atoi(B[l4 + 1]);

    Ysv(hfA, GjKF);

    for (int l4 = 0; l4 < GjKF; l4++) {
        printf("%d%s", hfA[l4], (l4 == GjKF - 1 ? "" : " "));
    }
    printf("\n");
    free(hfA);
    return 0;
}