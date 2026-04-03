/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A13_F12_O_A12_IndirectCmp.c
 * Implementation Logic: Wrapper sort with function pointer comparison.
 */
#include <stdio.h>
#include <stdlib.h>

typedef int (*cmp_f)(const void*, const void*);

int core_cmp(const void *p1, const void *p2) {
    return (*(int*)p1 > *(int*)p2) - (*(int*)p1 < *(int*)p2);
}

void BubbleSort(int arr[], int n) {
    cmp_f f = core_cmp;
    qsort(arr, n, sizeof(int), f);
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