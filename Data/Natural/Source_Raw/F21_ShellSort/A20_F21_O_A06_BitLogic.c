/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A20_F21_O_A06_BitLogic.c
 * Implementation Logic: 基于 A06 深度异或混淆 [cite: 22, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void ShellSort(int *a, int n) {
    for(int g=n/2;g>0;g/=2){for(int i=g;i<n;i++){for(int j=i;j>=g;j-=g){if(a[j-g]>a[j]){a[j]=a[j]^a[j-g];a[j-g]=a[j]^a[j-g];a[j]=a[j]^a[j-g];}else break;}}}
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) a[i] = atoi(argv[i+1]);
    ShellSort(a, n);
    for (int i = 0; i < n; i++) printf("%d%c", a[i], i == n - 1 ? '\n' : ' ');
    free(a);
    return 0;
}
