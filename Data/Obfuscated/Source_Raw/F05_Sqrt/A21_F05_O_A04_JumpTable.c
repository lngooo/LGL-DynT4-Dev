/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A21_F05_O_A04_JumpTable.c
 * Implementation Logic: Binary search using computed gotos (Labels as values).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int BGuf(int Qgli) {
    if (Qgli < 0) return -1;
    long u7pa = 0, ypC = Qgli, vtL = 0;
    void *q[] = {&&Spd, &&exit};
Spd:
    if (u7pa <= ypC) {
        long D = u7pa + (ypC - u7pa) / 2;
        if (D * D <= Qgli) { vtL = D; u7pa = D + 1; }
        else ypC = D - 1;
        goto *q[0];
    }
exit:
    return (int)vtL;
}

int main(int kzR, char *ShO[]) {
    if (kzR < 2) return 1;
    printf("%d\n", BGuf(atoi(ShO[1])));
    return 0;
}