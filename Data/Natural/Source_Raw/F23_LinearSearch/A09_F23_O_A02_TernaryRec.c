/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A09_F23_O_A02_TernaryRec.c
 * Implementation Logic: TernaryRec
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int LinearSearch(int arr[], int n, int target) {
    if (n <= 0) return -1;
    int res = (arr[0] == target) ? 0 : -2;
    if (res == 0) return 0;
    res = LinearSearch(arr + 1, n - 1, target);
    return (res == -1) ? -1 : res + 1;
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