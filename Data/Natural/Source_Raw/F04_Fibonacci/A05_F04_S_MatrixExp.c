/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A05_F04_S_MatrixExp.c
 * Implementation Logic: MatrixExp
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    long m[2][2] = {{1, 1}, {1, 0}}, r[2][2] = {{1, 1}, {1, 0}};
    for (int i = 1; i < n - 1; i++) {
        long x = r[0][0]*m[0][0] + r[0][1]*m[1][0];
        long y = r[0][0]*m[0][1] + r[0][1]*m[1][1];
        long z = r[1][0]*m[0][0] + r[1][1]*m[1][0];
        long w = r[1][0]*m[0][1] + r[1][1]*m[1][1];
        r[0][0]=x; r[0][1]=y; r[1][0]=z; r[1][1]=w;
    }
    return r[0][0];
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        return 1;
    }
    int n = atoi(argv[1]);
    if (n < 0) {
        printf("0\n");
        return 0;
    }
    long result = Fibonacci(n);
    printf("%ld\n", result);
    return 0;
}
