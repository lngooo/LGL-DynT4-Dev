/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A15_F12_O_A14_BitAdd.c
 * Implementation Logic: Odd-Even sort using bitwise addition logic for indexing.
 */
#include <stdio.h>
#include <stdlib.h>

int b_add(int a, int b) {
    while (b != 0) {
        int c = a & b; a ^= b; b = c << 1;
    }
    return a;
}

void BubbleSort(int arr[], int n) {
    int s = 0;
    while (!s) {
        s = 1;
        for (int i = 1; i < b_add(n, -1); i = b_add(i, 2)) {
            if (arr[i] > arr[b_add(i, 1)]) {
                int t = arr[i]; arr[i] = arr[b_add(i,1)]; arr[b_add(i,1)] = t;
                s = 0;
            }
        }
        for (int i = 0; i < b_add(n, -1); i = b_add(i, 2)) {
            if (arr[i] > arr[b_add(i, 1)]) {
                int t = arr[i]; arr[i] = arr[b_add(i,1)]; arr[b_add(i,1)] = t;
                s = 0;
            }
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