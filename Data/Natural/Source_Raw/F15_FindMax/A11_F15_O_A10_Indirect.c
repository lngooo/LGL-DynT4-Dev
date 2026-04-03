/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A11_F15_O_A10_Indirect.c
 * Implementation Logic: Bitwise max with function pointer indirection.
 */
#include <stdio.h>
#include <stdlib.h>

typedef int (*mf)(int, int);
int b_m(int a, int b) { return a ^ ((a ^ b) & -(a < b)); }

int FindMax(int arr[], int n) {
    mf f = b_m;
    int m = arr[0];
    for(int i=1; i<n; i++) m = f(m, arr[i]);
    return m;
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