/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A16_F14_O_A08_Flat.c
 * Implementation Logic: Flattened do-while loop.
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayReverse(int arr[], int size) {
    if (size < 2) return;
    int i = 0, st = 10;
    while(st != 0) {
        switch(st) {
            case 10: { int t = arr[i]; arr[i] = arr[size-1-i]; arr[size-1-i] = t; i++; st = 20; break; }
            case 20: st = (i < size / 2) ? 10 : 0; break;
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