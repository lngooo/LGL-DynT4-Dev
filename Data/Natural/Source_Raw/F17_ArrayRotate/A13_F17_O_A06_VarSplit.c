/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A13_F17_O_A06_VarSplit.c
 * Logic: Full copy with loop indices split into base and offset.
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k %= n;
    int *tmp = malloc(n * sizeof(int));
    int b = 0, o = 0;
    while(b + o < n) {
        tmp[b+o] = arr[(b + o + k) % n];
        o++; if(o >= 5) { b += o; o = 0; }
    }
    for(int i=0; i<n; i++) arr[i] = tmp[i];
    free(tmp);
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