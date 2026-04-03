/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A16_F17_O_A07_Flat.c
 * Logic: Cyclic rotation with flattened state machine.
 */
#include <stdio.h>
#include <stdlib.h>

void ArrayRotate(int arr[], int n, int k) {
    if (n <= 1) return;
    k %= n; if(k==0) return;
    int cnt = 0, start = 0, st = 0, curr, prev_v;
    while(cnt < n) {
        switch(st) {
            case 0: curr = start; prev_v = arr[start]; st = 1; break;
            case 1: {
                int nxt = (curr - k + n) % n;
                int tmp = arr[nxt]; arr[nxt] = prev_v; prev_v = tmp; curr = nxt; cnt++;
                if(curr == start) { start++; st = 0; } else st = 1;
                break;
            }
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