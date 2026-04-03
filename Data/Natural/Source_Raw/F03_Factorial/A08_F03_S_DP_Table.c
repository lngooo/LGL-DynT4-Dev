/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A08_F03_S_DP_Table.c
 * Implementation Logic: Dynamic Programming with memoization table (Seed 4).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long Factorial(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    long long *table = (long long *)malloc((n + 1) * sizeof(long long));
    table[0] = 1;
    for (int i = 1; i <= n; i++) {
        table[i] = table[i - 1] * i;
    }
    long long result = table[n];
    free(table);
    return result;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%lld\n", Factorial(atoi(argv[1])));
    return 0;
}