/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A20_F12_O_A08_Struct.c
 * Implementation Logic: Cocktail shaker BS with range encapsulated in struct.
 */
#include <stdio.h>
#include <stdlib.h>

struct Range { int low; int high; int s; };

void BubbleSort(int arr[], int n) {
    struct Range r = {0, n - 1, 1};
    while (r.s) {
        r.s = 0;
        for (int i = r.low; i < r.high; i++) {
            if (arr[i] > arr[i+1]) {
                int t = arr[i]; arr[i] = arr[i+1]; arr[i+1] = t;
                r.s = 1;
            }
        }
        if (!r.s) break;
        r.s = 0; r.high--;
        for (int i = r.high - 1; i >= r.low; i--) {
            if (arr[i] > arr[i+1]) {
                int t = arr[i]; arr[i] = arr[i+1]; arr[i+1] = t;
                r.s = 1;
            }
        }
        r.low++;
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