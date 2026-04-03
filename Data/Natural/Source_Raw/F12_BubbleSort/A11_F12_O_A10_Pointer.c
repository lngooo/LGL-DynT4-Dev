/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A11_F12_O_A10_Pointer.c
 * Implementation Logic: BS with pointer arithmetic and indirect swap.
 */
#include <stdio.h>
#include <stdlib.h>

void swp(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}

void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int *ptr = arr;
        for (int j = 0; j < n - i - 1; j++) {
            if (*ptr > *(ptr + 1)) swp(ptr, ptr + 1);
            ptr++;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i+1]);
    BubbleSort(arr, n);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}