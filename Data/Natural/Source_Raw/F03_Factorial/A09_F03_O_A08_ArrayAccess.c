/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A09_F03_O_A08_ArrayAccess.c
 * Implementation Logic: DP with obfuscated array indexing and redundant storage.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long Factorial(int n) {
    if (n < 0) return 0;
    long long dp[21]; 
    dp[0] = 1;
    for (int i = 1; i <= n && i < 21; i++) {
        int idx = (i * 2) / 2;
        dp[idx] = dp[idx - 1] * i;
    }
    return dp[n > 20 ? 20 : n];
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%lld\n", Factorial(atoi(argv[1])));
    return 0;
}