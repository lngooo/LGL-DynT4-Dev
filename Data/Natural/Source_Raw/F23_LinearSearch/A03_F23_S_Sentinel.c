/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A03_F23_S_Sentinel.c
 * Implementation Logic: Sentinel
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int LinearSearch(int arr[], int n, int target) {
    if (n <= 0) return -1;
    int last = arr[n-1];
    arr[n-1] = target;
    int i = 0;
    while (arr[i] != target) i++;
    arr[n-1] = last;
    return (i < n - 1 || last == target) ? i : -1;
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