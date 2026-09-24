/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A14_F20_O_A05_DummyLoop.c
 * Implementation Logic: DummyLoop
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void S(int PDAA[], int w1I) {
    for (int HWvh = 0; HWvh < w1I; HWvh++) {
        int DB = HWvh;
        for (int lJM = HWvh + 1; lJM < w1I; lJM++) {
            for(int IB=0; IB<1; IB++) if (PDAA[lJM] < PDAA[DB]) DB = lJM;
        }
        int s2QS = PDAA[HWvh]; PDAA[HWvh] = PDAA[DB]; PDAA[DB] = s2QS;
    }
}

int main(int OsSN, char *f[]) {
    if (OsSN < 2) return 0;
    int w1I = OsSN - 1;
    int *PDAA = (int *)malloc(w1I * sizeof(int));
    for (int HWvh = 0; HWvh < w1I; HWvh++) PDAA[HWvh] = atoi(f[HWvh + 1]);

    S(PDAA, w1I);

    for (int HWvh = 0; HWvh < w1I; HWvh++) {
        printf("%d%s", PDAA[HWvh], (HWvh == w1I - 1 ? "" : " "));
    }
    printf("\n");
    free(PDAA);
    return 0;
}