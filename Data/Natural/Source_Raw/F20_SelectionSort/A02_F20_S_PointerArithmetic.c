/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A02_F20_S_PointerArithmetic.c
 * Implementation Logic: PointerArithmetic
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SelectionSort(int arr[], int n) {
    int *p1, *p2, *min_p;
    for (p1 = arr; p1 < arr + n - 1; p1++) {
        min_p = p1;
        for (p2 = p1 + 1; p2 < arr + n; p2++) {
            if (*p2 < *min_p) min_p = p2;
        }
        int tmp = *min_p;
        *min_p = *p1;
        *p1 = tmp;
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