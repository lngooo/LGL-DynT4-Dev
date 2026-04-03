/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A04_F14_S_Stack.c
 * Implementation Logic: Using an auxiliary stack to reverse values.
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayReverse(int arr[], int size) {
    if (size <= 1) return;
    int *stack = (int*)malloc(size * sizeof(int));
    for(int i=0; i<size; i++) stack[i] = arr[i];
    for(int i=0; i<size; i++) arr[i] = stack[size - 1 - i];
    free(stack);
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