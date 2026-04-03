/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A04_F05_S_BinarySearch.c
 * Implementation Logic: Binary search approach in the range [0, n] (Seed 2).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sqrt(int n) {
    if (n < 0) return -1;
    if (n < 2) return n;
    long low = 0, high = n, ans = 0;
    while (low <= high) {
        long mid = low + (high - low) / 2;
        if (mid * mid <= n) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return (int)ans;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sqrt(atoi(argv[1])));
    return 0;
}