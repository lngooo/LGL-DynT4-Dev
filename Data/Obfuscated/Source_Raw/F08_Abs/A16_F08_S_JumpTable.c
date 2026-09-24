/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A16_F08_S_JumpTable.c
 * Implementation Logic: Using label pointers (Seed 8).
 */
#include <stdio.h>
#include <stdlib.h>

int JVJp(int D) {
    void *Z[] = {&&ha, &&X};
    goto *Z[D < 0];
X:
    return -D;
ha:
    return D;
}

int main(int im, char *xRO8[]) {
    if (im < 2) return 1;
    printf("%d\n", JVJp(atoi(xRO8[1])));
    return 0;
}