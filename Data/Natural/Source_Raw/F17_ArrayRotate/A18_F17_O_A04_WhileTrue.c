/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A18_F17_O_A04_WhileTrue.c
 * Logic: Step-by-step rotate using while(1).
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k %= n;
    int i = 0;
    while(1) {
        if(i >= k) break;
        int t = arr[0], j = 0;
        while(1) {
            if(j >= n - 1) break;
            arr[j] = arr[j+1]; j++;
        }
        arr[n-1] = t; i++;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    int k = atoi(argv[1]);
    int n = argc - 2;
    int *arr = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++) arr[i] = atoi(argv[i+2]);
    ArrayRotate(arr, n, k);
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}