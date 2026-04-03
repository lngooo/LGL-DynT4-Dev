/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A21_F05_O_A04_JumpTable.c
 * Implementation Logic: Binary search using computed gotos (Labels as values).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sqrt(int n) {
    if (n < 0) return -1;
    long l = 0, h = n, ans = 0;
    void *targets[] = {&&step, &&exit};
step:
    if (l <= h) {
        long m = l + (h - l) / 2;
        if (m * m <= n) { ans = m; l = m + 1; }
        else h = m - 1;
        goto *targets[0];
    }
exit:
    return (int)ans;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sqrt(atoi(argv[1])));
    return 0;
}