/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A13_F22_O_A05_LogicWrap.c
 * Implementation Logic: LogicWrap
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void InsertionSort(int arr[], int n) {
    int cursor = 1;
    while (cursor < n) {
        int val = arr[cursor], pos = cursor - 1;
        while (pos >= 0) {
            int cmp = (arr[pos] > val);
            if (cmp) { arr[pos+1] = arr[pos]; pos--; }
            else break;
        }
        arr[pos+1] = val;
        cursor++;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i + 1]);

    InsertionSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1 ? "" : " "));
    }
    printf("\n");
    free(arr);
    return 0;
}