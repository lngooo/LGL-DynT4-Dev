/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A05_F24_S_UnrolledFour.c
 * Implementation Logic: UnrolledFour
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ArraySum(int arr[], int n) {
    int sum = 0, i = 0;
    for (; i <= n - 4; i += 4) {
        sum += (arr[i] + arr[i+1] + arr[i+2] + arr[i+3]);
    }
    for (; i < n; i++) sum += arr[i];
    return sum;
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