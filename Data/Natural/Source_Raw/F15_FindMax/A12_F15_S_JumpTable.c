/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A12_F15_S_JumpTable.c
 * Implementation Logic: Max via computed goto comparison (Seed 6).
 */
#include <stdio.h>
#include <stdlib.h>

int FindMax(int arr[], int n) {
    int max = arr[0];
    void *tbl[] = {&&skip, &&update};
    for(int i=1; i<n; i++) {
        goto *tbl[arr[i] > max];
    update:
        max = arr[i];
    skip:;
    }
    return max;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i+1]);
    printf("%d\n", FindMax(arr, n));
    free(arr);
    return 0;
}