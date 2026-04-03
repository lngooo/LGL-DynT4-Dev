/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A18_F20_O_A02_PtrOffset.c
 * Implementation Logic: PtrOffset
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int *base = arr + i;
        int *walker = base + 1;
        int *min_ptr = base;
        while (walker < arr + n) {
            if (*walker < *min_ptr) min_ptr = walker;
            walker++;
        }
        int val = *base; *base = *min_ptr; *min_ptr = val;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i + 1]);

    SelectionSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1 ? "" : " "));
    }
    printf("\n");
    free(arr);
    return 0;
}