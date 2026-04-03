/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A17_F19_O_A01_Unroll.c
 * Implementation Logic: Unroll
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RemoveDuplicates(int arr[], int n) {
    int sz = 0;
    for (int i = 0; i < n; i++) {
        int f = 0;
        int j = 0;
        for (; j <= sz - 2; j += 2) {
            if (arr[i] == arr[j] || arr[i] == arr[j+1]) { f = 1; break; }
        }
        for (; j < sz; j++) if (arr[i] == arr[j]) f = 1;
        if (!f) arr[sz++] = arr[i];
    }
    return sz;
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