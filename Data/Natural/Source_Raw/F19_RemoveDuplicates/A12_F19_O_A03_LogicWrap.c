/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A12_F19_O_A03_LogicWrap.c
 * Implementation Logic: LogicWrap
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RemoveDuplicates(int arr[], int n) {
    int b[128], c = 0;
    for (int i = 0; i < n; i++) {
        int v = arr[i], k = -1, d = 0;
        while (++k < c) if (b[k] == v) d = 1;
        if (!d) b[c++] = v;
    }
    for (int i = 0; i < c; i++) arr[i] = b[i];
    return c;
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