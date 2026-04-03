/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A13_F20_O_A01_LogicWrap.c
 * Implementation Logic: LogicWrap
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SelectionSort(int arr[], int n) {
    int cur = 0;
    while (cur < n) {
        int smallest = cur;
        for (int k = cur + 1; k < n; k++) {
            int flag = (arr[k] < arr[smallest]);
            switch(flag) { case 1: smallest = k; break; default: break; }
        }
        int t = arr[cur]; arr[cur] = arr[smallest]; arr[smallest] = t;
        cur++;
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