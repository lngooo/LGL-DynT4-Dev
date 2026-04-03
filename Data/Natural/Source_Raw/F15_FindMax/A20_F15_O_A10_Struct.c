/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A20_F15_O_A10_Struct.c
 * Implementation Logic: Max using temporary comparison struct.
 */
#include <stdio.h>
#include <stdlib.h>

struct Comp { int a; int b; int res; };

int FindMax(int arr[], int n) {
    struct Comp c = {arr[0], 0, arr[0]};
    for(int i=1; i<n; i++) {
        c.b = arr[i];
        c.res = (c.b > c.res) ? c.b : c.res;
    }
    return c.res;
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