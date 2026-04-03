/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A17_F20_O_A01_WhileTrue.c
 * Implementation Logic: WhileTrue
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SelectionSort(int arr[], int n) {
    int i = 0;
    while (1) {
        if (i >= n) break;
        int low = i;
        for(int j = i + 1; j < n; j++) if(arr[j] < arr[low]) low = j;
        int t = arr[i]; arr[i] = arr[low]; arr[low] = t;
        i++;
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