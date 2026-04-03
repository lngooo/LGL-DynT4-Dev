/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A10_F17_O_A04_Goto.c
 * Logic: Step-by-step rotation using GOTO labels.
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k %= n;
    int i = 0, j;
outer:
    if (i >= k) goto end;
    int temp = arr[0];
    j = 0;
inner:
    if (j >= n - 1) goto put;
    arr[j] = arr[j + 1];
    j++;
    goto inner;
put:
    arr[n - 1] = temp;
    i++;
    goto outer;
end:
    return;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    int k = atoi(argv[1]);
    int n = argc - 2;
    int *arr = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++) arr[i] = atoi(argv[i+2]);
    ArrayRotate(arr, n, k);
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}