/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A15_F19_O_A05_JumpTable.c
 * Implementation Logic: JumpTable
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RemoveDuplicates(int arr[], int n) {
    int cur_n = n;
    for (int i = 0; i < cur_n; i++) {
        int j = i + 1;
    inner:
        if (j >= cur_n) continue;
        if (arr[i] == arr[j]) {
            for (int k = j; k < cur_n - 1; k++) arr[k] = arr[k + 1];
            cur_n--; goto inner;
        }
        j++; goto inner;
    }
    return cur_n;
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