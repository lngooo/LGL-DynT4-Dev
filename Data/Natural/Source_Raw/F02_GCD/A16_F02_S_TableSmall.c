/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A16_F02_S_TableSmall.c
 * Implementation Logic: Static table for small inputs (0-5), Euclidean for others (Seed 8).
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) {
    a = abs(a); b = abs(b);
    if (a <= 3 && b <= 3) {
        static int map[4][4] = {{0,1,2,3},{1,1,1,1},{2,1,2,1},{3,1,1,3}};
        return map[a][b];
    }
    return b == 0 ? a : GCD(b, a % b);
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}