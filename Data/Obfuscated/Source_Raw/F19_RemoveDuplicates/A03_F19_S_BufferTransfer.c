/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A03_F19_S_BufferTransfer.c
 * Implementation Logic: BufferTransfer
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int iUN(int eJqq[], int P5kz) {
    int f8qR[128], SjIn = 0;
    for (int O = 0; O < P5kz; O++) {
        int OSP = 0;
        for (int Tx = 0; Tx < SjIn; Tx++) {
            if (f8qR[Tx] == eJqq[O]) { OSP = 1; break; }
        }
        if (!OSP) f8qR[SjIn++] = eJqq[O];
    }
    for (int O = 0; O < SjIn; O++) eJqq[O] = f8qR[O];
    return SjIn;
}

int main(int A0, char *uY[]) {
    if (A0 < 2) return 0;
    int yb9M = A0 - 1;
    int eJqq[128];
    for (int O = 0; O < yb9M; O++) {
        eJqq[O] = atoi(uY[O + 1]);
    }
    int er = iUN(eJqq, yb9M);
    for (int O = 0; O < er; O++) {
        printf("%d%s", eJqq[O], (O == er - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}