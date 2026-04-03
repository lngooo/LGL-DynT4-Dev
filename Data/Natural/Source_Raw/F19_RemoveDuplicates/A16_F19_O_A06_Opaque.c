/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A16_F19_O_A06_Opaque.c
 * Implementation Logic: Opaque
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RemoveDuplicates(int arr[], int n) {
    int flags[128] = {0}, pos = 0;
    if ((n * n + n) % 2 == 0) {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) if (arr[i] == arr[j]) flags[j] = 1;
        }
    }
    for (int i = 0; i < n; i++) if (!flags[i]) arr[pos++] = arr[i];
    return pos;
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