/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A10_F04_O_A02_TernaryRecursive.c
 * Implementation Logic: TernaryRecursive
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long N(int DLJ9) {
    return (DLJ9 < 2) ? (long)DLJ9 : (N(DLJ9-1) + N(DLJ9-2));
}

int main(int C, char *uM[]) {
    if (C < 2) {
        return 1;
    }
    int DLJ9 = atoi(uM[1]);
    if (DLJ9 < 0) {
        printf("0\n");
        return 0;
    }
    long Gj9d = N(DLJ9);
    printf("%ld\n", Gj9d);
    return 0;
}
