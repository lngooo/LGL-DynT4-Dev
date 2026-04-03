/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A07_F17_S_Cyclic.c
 * Logic: Keep track of count of elements moved to achieve O(n) in one pass.
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k = k % n;
    if (k == 0) return;
    int count = 0;
    for (int start = 0; count < n; start++) {
        int curr = start;
        int prev_val = arr[start];
        do {
            int next_idx = (curr - k + n) % n;
            int temp = arr[next_idx];
            arr[next_idx] = prev_val;
            prev_val = temp;
            curr = next_idx;
            count++;
        } while (start != curr);
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