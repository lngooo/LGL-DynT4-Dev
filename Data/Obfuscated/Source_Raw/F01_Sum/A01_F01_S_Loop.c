/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A01_F01_S_Loop.c
 * Implementation Logic: Basic iterative approach using a for loop.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int b(int poi) {
    int R = 0;
    for (int L = 1; L <= poi; L++) {
        R += L;
    }
    return R;
}

int main(int cbfn, char *GM[]) {
    if (cbfn < 2) return 1;
    int poi = atoi(GM[1]);
    printf("%d\n", b(poi));
    return 0;
}