/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A03_F15_O_A01_Goto.c
 * Implementation Logic: Linear scan using goto labels.
 */
#include <stdio.h>
#include <stdlib.h>

int FindMax(int arr[], int n) {
    int i = 1, max = arr[0];
loop:
    if (i >= n) goto end;
    if (arr[i] <= max) goto next;
    max = arr[i];
next:
    i++;
    goto loop;
end:
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