/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A08_F21_S_SedgewickLow.c
 * Implementation Logic: 使用 Sedgewick 序列片段 (4^k+3*2^k+1) 
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void ShellSort(int *a, int n) {
    int s[]={109,41,19,5,1};for(int x=0;x<5;x++){int g=s[x];if(g>=n)continue;for(int i=g;i<n;i++){int v=a[i],j=i;while(j>=g&&a[j-g]>v){a[j]=a[j-g];j-=g;}a[j]=v;}}
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
