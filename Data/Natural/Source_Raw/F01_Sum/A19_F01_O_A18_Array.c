/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A19_F01_O_A18_Array.c
 * Implementation Logic: Storing sequence in an array before summing (Data Structure clone).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sum(int n) {
    if (n <= 0) return 0;
    int *arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) arr[i] = i + 1;
    int total = 0;
    for (int i = 0; i < n; i++) total += arr[i];
    free(arr);
    return total;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sum(atoi(argv[1])));
    return 0;
}