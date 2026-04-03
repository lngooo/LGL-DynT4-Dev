/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A06_F19_S_FlagMap.c
 * Implementation Logic: FlagMap
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RemoveDuplicates(int arr[], int n) {
    int marks[128] = {0}, out = 0;
    for (int i = 0; i < n; i++) {
        if (marks[i]) continue;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) marks[j] = 1;
        }
    }
    for (int i = 0; i < n; i++) {
        if (!marks[i]) arr[out++] = arr[i];
    }
    return out;
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