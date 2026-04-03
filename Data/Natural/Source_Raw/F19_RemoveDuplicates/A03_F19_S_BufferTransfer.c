/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A03_F19_S_BufferTransfer.c
 * Implementation Logic: BufferTransfer
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RemoveDuplicates(int arr[], int n) {
    int temp[128], count = 0;
    for (int i = 0; i < n; i++) {
        int exists = 0;
        for (int k = 0; k < count; k++) {
            if (temp[k] == arr[i]) { exists = 1; break; }
        }
        if (!exists) temp[count++] = arr[i];
    }
    for (int i = 0; i < count; i++) arr[i] = temp[i];
    return count;
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