/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A06_F11_S_Fibonacci.c
 * Implementation Logic: Fibonacci search algorithm using Fibonacci numbers to split the array.
 */
#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int arr[], int size, int target) {
    int fib2 = 0, fib1 = 1, fibM = fib2 + fib1;
    while (fibM < size) {
        fib2 = fib1; fib1 = fibM; fibM = fib2 + fib1;
    }
    int offset = -1;
    while (fibM > 1) {
        int i = (offset + fib2 < size - 1) ? offset + fib2 : size - 1;
        if (arr[i] < target) {
            fibM = fib1; fib1 = fib2; fib2 = fibM - fib1;
            offset = i;
        } else if (arr[i] > target) {
            fibM = fib2; fib1 = fib1 - fib2; fib2 = fibM - fib1;
        } else return i;
    }
    if (fib1 && arr[offset + 1] == target) return offset + 1;
    return -1;
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