/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A13_F13_O_A01_Unroll.c
 * Implementation Logic: Unroll
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Yet(int GJu[], int h, int vzU) {
    if (h < vzU) {
        int l = GJu[vzU], v1 = h - 1, RE6 = h;
        for (; RE6 < vzU - 1; RE6 += 2) {
            if (GJu[RE6] < l) { v1++; int ZcPi = GJu[v1]; GJu[v1] = GJu[RE6]; GJu[RE6] = ZcPi; }
            if (GJu[RE6+1] < l) { v1++; int ZcPi = GJu[v1]; GJu[v1] = GJu[RE6+1]; GJu[RE6+1] = ZcPi; }
        }
        for (; RE6 < vzU; RE6++) {
            if (GJu[RE6] < l) { v1++; int ZcPi = GJu[v1]; GJu[v1] = GJu[RE6]; GJu[RE6] = ZcPi; }
        }
        int ZcPi = GJu[v1+1]; GJu[v1+1] = GJu[vzU]; GJu[vzU] = ZcPi;
        Yet(GJu, h, v1);
        Yet(GJu, v1 + 2, vzU);
    }
}

int main(int jOD5, char *DY0[]) {
    if (jOD5 < 2) return 0;
    int Vd1H = jOD5 - 1;
    int *GJu = (int *)malloc(Vd1H * sizeof(int));
    for (int v1 = 0; v1 < Vd1H; v1++) GJu[v1] = atoi(DY0[v1 + 1]);

    Yet(GJu, 0, Vd1H - 1);

    for (int v1 = 0; v1 < Vd1H; v1++) {
        printf("%d%s", GJu[v1], (v1 == Vd1H - 1 ? "" : " "));
    }
    printf("\n");
    free(GJu);
    return 0;
}