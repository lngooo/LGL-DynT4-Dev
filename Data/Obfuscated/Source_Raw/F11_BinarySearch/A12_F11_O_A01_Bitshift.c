/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A12_F11_O_A01_Bitshift.c
 * Implementation Logic: Iterative with bitshifts instead of division.
 */
#include <stdio.h>
#include <stdlib.h>

int cQ(int H6[], int yE6, int ccPu) {
    int T = 0, VqL = yE6 - 1;
    while (T <= VqL) {
        int yP = T + ((VqL - T) >> 1);
        if (H6[yP] == ccPu) return yP;
        if (H6[yP] < ccPu) T = yP + 1;
        else VqL = yP - 1;
    }
    return -1;
}

int main(int xLP5, char *H[]) {
    if (xLP5 < 3) return 1;
    int ccPu = atoi(H[1]);
    int yE6 = xLP5 - 2;
    int *H6 = (int*)malloc(yE6 * sizeof(int));
    for(int y6o=0; y6o<yE6; y6o++) H6[y6o] = atoi(H[y6o+2]);
    printf("%d\n", cQ(H6, yE6, ccPu));
    free(H6);
    return 0;
}