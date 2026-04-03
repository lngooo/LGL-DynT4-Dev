/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A18_F01_S_DualPointer.c
 * Implementation Logic: Summing from both ends (1 and n) simultaneously (Seed 7).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sum(int n) {
    int left = 1, right = n, total = 0;
    while (left < right) {
        total += (left + right);
        left++;
        right--;
    }
    if (left == right) total += left;
    return total;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sum(atoi(argv[1])));
    return 0;
}