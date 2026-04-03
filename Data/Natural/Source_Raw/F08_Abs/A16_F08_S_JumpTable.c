/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A16_F08_S_JumpTable.c
 * Implementation Logic: Using label pointers (Seed 8).
 */
#include <stdio.h>
#include <stdlib.h>

int Abs(int n) {
    void *tbl[] = {&&pos, &&neg};
    goto *tbl[n < 0];
neg:
    return -n;
pos:
    return n;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Abs(atoi(argv[1])));
    return 0;
}