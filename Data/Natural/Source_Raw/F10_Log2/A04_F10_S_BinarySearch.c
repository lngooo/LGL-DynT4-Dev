/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A04_F10_S_BinarySearch.c
 * Implementation Logic: BinarySearch
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Log2(int n) {
    int low = 0, high = 31, res = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if ((1ULL << mid) <= (unsigned int)n) {
            res = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
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