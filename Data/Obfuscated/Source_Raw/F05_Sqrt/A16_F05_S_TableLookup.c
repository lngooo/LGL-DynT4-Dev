/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A16_F05_S_TableLookup.c
 * Implementation Logic: Table lookup for small n (0-15), Newton fallback (Seed 8).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int IwR(int NEm) {
    static const int rJ[] = {0,1,1,1,2,2,2,2,2,3,3,3,3,3,3,3};
    if (NEm < 0) return -1;
    if (NEm <= 15) return rJ[NEm];
    long o8t = NEm, TnS = (NEm/2 + 1);
    while (TnS < o8t) { o8t = TnS; TnS = (o8t + NEm/o8t)/2; }
    return (int)o8t;
}

int main(int uEwJ, char *shK[]) {
    if (uEwJ < 2) return 1;
    printf("%d\n", IwR(atoi(shK[1])));
    return 0;
}