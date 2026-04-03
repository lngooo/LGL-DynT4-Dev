/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A04_F19_S_PointerScan.c
 * Implementation Logic: PointerScan
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RemoveDuplicates(int arr[], int n) {
    int *base = arr;
    int *write_p = arr;
    for (int i = 0; i < n; i++) {
        int *check = base;
        int found = 0;
        while (check < write_p) {
            if (*check == *(base + i)) { found = 1; break; }
            check++;
        }
        if (!found) *write_p++ = *(base + i);
    }
    return (int)(write_p - base);
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