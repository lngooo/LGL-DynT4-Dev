/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A05_F16_S_PointerSwapMerge.c
 * Implementation Logic: PointerSwapMerge
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void z(int ph[], int H, int F4f) {
    if (F4f <= H) return;
    int Mh = (H + F4f) >> 1;
    z(ph, H, Mh);
    z(ph, Mh + 1, F4f);
    int *v1L = (int*)malloc((F4f - H + 1) * sizeof(int));
    int ZVVp = H, njgl = Mh + 1, rC = 0;
    while (ZVVp <= Mh || njgl <= F4f) {
        if (ZVVp <= Mh && (njgl > F4f || ph[ZVVp] <= ph[njgl])) v1L[rC++] = ph[ZVVp++];
        else v1L[rC++] = ph[njgl++];
    }
    for (ZVVp = 0; ZVVp < rC; ZVVp++) ph[H + ZVVp] = v1L[ZVVp];
    free(v1L);
}

int main(int q3Ld, char *IxS8[]) {
    if (q3Ld < 2) return 0;
    int u = q3Ld - 1;
    int *ph = (int *)malloc(u * sizeof(int));
    for (int ZVVp = 0; ZVVp < u; ZVVp++) ph[ZVVp] = atoi(IxS8[ZVVp + 1]);

    z(ph, 0, u - 1);

    for (int ZVVp = 0; ZVVp < u; ZVVp++) {
        printf("%d%s", ph[ZVVp], (ZVVp == u - 1 ? "" : " "));
    }
    printf("\n");
    free(ph);
    return 0;
}