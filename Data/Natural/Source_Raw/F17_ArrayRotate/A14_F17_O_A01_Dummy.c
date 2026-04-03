/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A14_F17_O_A01_Dummy.c
 * Logic: Reversal with dummy junk loops.
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k %= n;
    int sets[3][2] = {{0, k-1}, {k, n-1}, {0, n-1}};
    for(int i=0; i<3; i++) {
        int s = sets[i][0], e = sets[i][1];
        while(s < e) {
            for(int d=0; d<1; d++) {
                int t = arr[s]; arr[s] = arr[e]; arr[e] = t;
            }
            s++; e--;
        }
    }
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