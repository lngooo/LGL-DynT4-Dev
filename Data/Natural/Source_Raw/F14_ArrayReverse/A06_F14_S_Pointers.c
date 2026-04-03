/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A06_F14_S_Pointers.c
 * Implementation Logic: Using pointer increments and decrements.
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayReverse(int arr[], int size) {
    int *p1 = arr;
    int *p2 = arr + size - 1;
    while (p1 < p2) {
        int t = *p1;
        *p1 = *p2;
        *p2 = t;
        p1++; p2--;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int size = argc - 1;
    int *arr = (int*)malloc(size * sizeof(int));
    for(int i=0; i<size; i++) arr[i] = atoi(argv[i+1]);
    ArrayReverse(arr, size);
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}