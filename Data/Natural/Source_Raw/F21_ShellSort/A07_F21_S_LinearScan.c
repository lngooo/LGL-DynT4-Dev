/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A07_F21_S_LinearScan.c
 * Implementation Logic: 在每个间隔组内执行线性查找定位 [cite: 12]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void ShellSort(int *a, int n) {
    for(int g=n/2;g>0;g/=2){for(int i=g;i<n;i++){int v=a[i],p=i;while(p>=g&&a[p-g]>v)p-=g;for(int k=i;k>p;k-=g)a[k]=a[k-g];a[p]=v;}}
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
