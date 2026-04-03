/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A20_F20_O_A04_VarSplit.c
 * Implementation Logic: VarSplit
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SelectionSort(int arr[], int n) {
    int head = 0, tail = n - 1;
    while (head < tail) {
        int a = head, b = head;
        for (int k = head; k <= tail; k++) {
            if (arr[k] < arr[a]) a = k;
            if (arr[k] > arr[b]) b = k;
        }
        int t1 = arr[head]; arr[head] = arr[a]; arr[a] = t1;
        if (b == head) b = a;
        int t2 = arr[tail]; arr[tail] = arr[b]; arr[b] = t2;
        head++; tail--;
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