/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A19_F17_O_A01_Macro.c
 * Logic: Reversal algorithm with logic hidden in macros.
 */
#include <stdio.h>
#include <stdlib.h>

#define SWP(x,y) {int _t=x; x=y; y=_t;}
#define REV_RANGE(a,s,e) {int _s=s, _e=e; while(_s<_e){SWP(a[_s],a[_e]); _s++; _e--;}}

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    int rk = k % n;
    REV_RANGE(arr, 0, rk-1);
    REV_RANGE(arr, rk, n-1);
    REV_RANGE(arr, 0, n-1);
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