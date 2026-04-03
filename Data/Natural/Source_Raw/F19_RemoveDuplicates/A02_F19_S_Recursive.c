/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A02_F19_S_Recursive.c
 * Implementation Logic: Recursive
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RemoveDuplicates(int arr[], int n) {
    if (n <= 1) return n;
    int m = RemoveDuplicates(arr, n - 1);
    int seen = 0;
    for (int i = 0; i < m; i++) {
        if (arr[i] == arr[n - 1]) { seen = 1; break; }
    }
    if (!seen) {
        arr[m] = arr[n - 1];
        return m + 1;
    }
    return m;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int size = argc - 1;
    int arr[128];
    for (int i = 0; i < size; i++) {
        arr[i] = atoi(argv[i + 1]);
    }
    int new_size = RemoveDuplicates(arr, size);
    for (int i = 0; i < new_size; i++) {
        printf("%d%s", arr[i], (i == new_size - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}