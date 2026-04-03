/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A17_F24_O_A06_WhileTrue.c
 * Implementation Logic: WhileTrue
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ArraySum(int arr[], int n) {
    int s = 0, i = n - 1;
    while (1) {
        if (i < 0) break;
        s += arr[i--];
    }
    return s;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i + 1]);

    int result = ArraySum(arr, n);
    printf("%d\n", result);

    free(arr);
    return 0;
}