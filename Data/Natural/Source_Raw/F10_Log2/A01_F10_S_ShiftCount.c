/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A01_F10_S_ShiftCount.c
 * Implementation Logic: ShiftCount
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Log2(int n) {
    int res = 0;
    while (n >>= 1) res++;
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = atoi(argv[1]);
    if (n <= 0) return 0; 
    int result = Log2(n);
    printf("%d\n", result);
    return 0;
}