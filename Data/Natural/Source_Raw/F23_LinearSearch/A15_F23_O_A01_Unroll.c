/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A15_F23_O_A01_Unroll.c
 * Implementation Logic: Unroll
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int LinearSearch(int arr[], int n, int target) {
    int i = 0;
    for (; i <= n - 2; i += 2) {
        if (arr[i] == target) return i;
        if (arr[i+1] == target) return i + 1;
    }
    for (; i < n; i++) if (arr[i] == target) return i;
    return -1;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    int target = atoi(argv[1]);
    int size = argc - 2;
    int arr[100];
    for (int i = 0; i < size; i++) {
        arr[i] = atoi(argv[i + 2]);
    }
    int result = LinearSearch(arr, size, target);
    printf("%d\n", result);
    return 0;
}