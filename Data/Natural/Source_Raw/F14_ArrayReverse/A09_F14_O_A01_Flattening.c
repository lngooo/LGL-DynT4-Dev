/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A09_F14_O_A01_Flattening.c
 * Implementation Logic: Control flow flattening for A01.
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayReverse(int arr[], int size) {
    int s = 0, e = size - 1, state = 0;
    while (state != -1) {
        switch (state) {
            case 0: state = (s < e) ? 1 : 2; break;
            case 1: { int t = arr[s]; arr[s] = arr[e]; arr[e] = t; s++; e--; state = 0; break; }
            case 2: state = -1; break;
        }
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