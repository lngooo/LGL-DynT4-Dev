/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A05_F19_S_InPlaceDelete.c
 * Implementation Logic: InPlaceDelete
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RemoveDuplicates(int arr[], int n) {
    int limit = n;
    for (int i = 0; i < limit; i++) {
        for (int j = i + 1; j < limit; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < limit - 1; k++) arr[k] = arr[k + 1];
                limit--; j--;
            }
        }
    }
    return limit;
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