/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A02_F15_O_A01_Flat.c
 * Implementation Logic: Linear scan with control flow flattening.
 */
#include <stdio.h>
#include <stdlib.h>

int FindMax(int arr[], int n) {
    int i = 1, max = arr[0], state = 0;
    while (state != 3) {
        switch (state) {
            case 0: state = (i < n) ? 1 : 3; break;
            case 1: if (arr[i] > max) max = arr[i]; state = 2; break;
            case 2: i++; state = 0; break;
        }
    }
    return max;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i+1]);
    printf("%d\n", FindMax(arr, n));
    free(arr);
    return 0;
}