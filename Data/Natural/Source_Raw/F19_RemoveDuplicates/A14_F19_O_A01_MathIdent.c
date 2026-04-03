/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A14_F19_O_A01_MathIdent.c
 * Implementation Logic: MathIdent
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RemoveDuplicates(int arr[], int n) {
    int len = 0;
    for (int i = 0; i < n; i++) {
        int match = 0;
        for (int j = 0; j < len; j++) {
            double diff = (double)arr[i] - (double)arr[j];
            if ((int)floor(diff * diff) == 0) match = 1;
        }
        if (!match) arr[len++] = arr[i];
    }
    return len;
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