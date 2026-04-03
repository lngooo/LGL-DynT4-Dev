/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A09_F15_O_A08_Bubble.c
 * Implementation Logic: Max via partial bubble sort pass.
 */
#include <stdio.h>
#include <stdlib.h>

int FindMax(int arr[], int n) {
    int *tmp = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++) tmp[i] = arr[i];
    for (int i = 0; i < n - 1; i++) {
        if (tmp[i] > tmp[i+1]) {
            int t = tmp[i]; tmp[i] = tmp[i+1]; tmp[i+1] = t;
        }
    }
    int res = tmp[n-1];
    free(tmp);
    return res;
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