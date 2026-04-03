/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A10_F14_O_A03_Goto.c
 * Implementation Logic: Loop of A03 using goto.
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayReverse(int arr[], int size) {
    int i = 0;
loop:
    if (i >= size / 2) goto end;
    int t = arr[i];
    arr[i] = arr[size - 1 - i];
    arr[size - 1 - i] = t;
    i++;
    goto loop;
end:
    return;
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