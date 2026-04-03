/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A19_F19_O_A01_WhileTrue.c
 * Implementation Logic: WhileTrue
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RemoveDuplicates(int arr[], int n) {
    int k = 0, p = 0;
    while (p < n) {
        int target = arr[p], exist = 0;
        for (int j = 0; j < k; j++) if (arr[j] == target) exist = 1;
        if (!exist) { arr[k] = target; k++; }
        p++;
    }
    return k;
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