/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A17_F15_O_A16_BitAdd.c
 * Implementation Logic: Backwards scan with bitwise index decrement.
 */
#include <stdio.h>
#include <stdlib.h>

int b_sub(int a, int b) {
    while (b != 0) { int borrow = (~a) & b; a = a ^ b; b = borrow << 1; }
    return a;
}

int FindMax(int arr[], int n) {
    int m = arr[b_sub(n, 1)];
    for(int i = b_sub(n, 2); i >= 0; i = b_sub(i, 1)) {
        if (arr[i] > m) m = arr[i];
    }
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