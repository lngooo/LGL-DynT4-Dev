/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A17_F22_O_A01_WhileTrue.c
 * Implementation Logic: WhileTrue
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void S(int CU[], int xfwJ) {
    int x = 1;
    while (1) {
        if (x >= xfwJ) break;
        int MoCY = CU[x], oK00 = x - 1;
        while (1) {
            if (oK00 < 0 || CU[oK00] <= MoCY) break;
            CU[oK00+1] = CU[oK00];
            oK00--;
        }
        CU[oK00+1] = MoCY;
        x++;
    }
}

int main(int Ip, char *RLQi[]) {
    if (Ip < 2) return 0;
    int xfwJ = Ip - 1;
    int *CU = (int *)malloc(xfwJ * sizeof(int));
    for (int x = 0; x < xfwJ; x++) CU[x] = atoi(RLQi[x + 1]);

    S(CU, xfwJ);

    for (int x = 0; x < xfwJ; x++) {
        printf("%d%s", CU[x], (x == xfwJ - 1 ? "" : " "));
    }
    printf("\n");
    free(CU);
    return 0;
}