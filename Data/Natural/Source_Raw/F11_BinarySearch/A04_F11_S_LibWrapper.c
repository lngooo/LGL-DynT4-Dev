/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A04_F11_S_LibWrapper.c
 * Implementation Logic: Using standard C library bsearch function.
 */
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int BinarySearch(int arr[], int size, int target) {
    int *res = (int*)bsearch(&target, arr, size, sizeof(int), compare);
    if (res == NULL) return -1;
    return (int)(res - arr);
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    int target = atoi(argv[1]);
    int size = argc - 2;
    int *arr = (int*)malloc(size * sizeof(int));
    for(int i=0; i<size; i++) arr[i] = atoi(argv[i+2]);
    printf("%d\n", BinarySearch(arr, size, target));
    free(arr);
    return 0;
}