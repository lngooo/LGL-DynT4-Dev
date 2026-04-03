/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A10_F19_O_A06_Bitwise.c
 * Implementation Logic: Bitwise
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RemoveDuplicates(int arr[], int n) {
    int m[128] = {0}, top = 0;
    for (int i = 0; i < n; i++) {
        if (m[i]) continue;
        for (int j = i + 1; j < n; j++) {
            if (!(arr[i] ^ arr[j])) m[j] = 1;
        }
    }
    for (int i = 0; i < n; i++) if (!m[i]) arr[top++] = arr[i];
    return top;
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