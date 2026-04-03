/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A19_F23_O_A02_RecursiveFlatten.c
 * Implementation Logic: RecursiveFlatten
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int LinearSearch(int arr[], int n, int target) {
    static int idx = 0;
    if (n <= 0) { idx = 0; return -1; }
    if (arr[0] == target) { int found = idx; idx = 0; return found; }
    idx++;
    return LinearSearch(arr + 1, n - 1, target);
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