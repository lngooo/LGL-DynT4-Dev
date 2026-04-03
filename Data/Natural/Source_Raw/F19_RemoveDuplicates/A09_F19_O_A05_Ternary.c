/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A09_F19_O_A05_Ternary.c
 * Implementation Logic: Ternary
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RemoveDuplicates(int arr[], int n) {
    int l = n;
    for (int i = 0; i < l; i++) {
        for (int j = i + 1; j < l; j++) {
            int is_eq = (arr[i] == arr[j]);
            if (is_eq) {
                for (int k = j; k < l - 1; k++) arr[k] = arr[k + 1];
                l--; j--;
            }
        }
    }
    return l;
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