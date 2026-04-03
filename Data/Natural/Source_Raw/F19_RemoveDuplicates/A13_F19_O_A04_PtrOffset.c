/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A13_F19_O_A04_PtrOffset.c
 * Implementation Logic: PtrOffset
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RemoveDuplicates(int arr[], int n) {
    int *w = arr;
    for (int i = 0; i < n; i++) {
        int ok = 1;
        for (int j = 0; j < (int)(w - arr); j++) {
            if (*(arr + j) == *(arr + i)) ok = 0;
        }
        if (ok) { *w = *(arr + i); w++; }
    }
    return (int)(w - arr);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int size = argc - 1;
    int arr[128];
    for (int i = 0; i < size; i++) {
        arr[i] = atoi(argv[i + 1]);
    }
    int new_size = RemoveDuplicates(arr, size);
    for (int i = 0; i < new_size; i++) {
        printf("%d%s", arr[i], (i == new_size - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}