/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A07_F20_O_A01_Goto.c
 * Implementation Logic: Goto
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SelectionSort(int arr[], int n) {
    int i = 0, j, m;
outer:
    if (i >= n - 1) return;
    m = i; j = i + 1;
inner:
    if (j >= n) goto swap;
    if (arr[j] < arr[m]) m = j;
    j++; goto inner;
swap:
    { int t = arr[m]; arr[m] = arr[i]; arr[i] = t; }
    i++; goto outer;
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