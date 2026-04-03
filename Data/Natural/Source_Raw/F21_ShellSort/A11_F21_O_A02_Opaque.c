/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A11_F21_O_A02_Opaque.c
 * Implementation Logic: 基于 A02 插入不透明谓词 (if(1)) [cite: 19, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void ShellSort(int *a, int n) {
    int h=1;while(h<n/3)h=3*h+1;while(h>=1){if((int)(exp(0.0))==1){for(int i=h;i<n;i++){int v=a[i],j=i;while(j>=h&&a[j-h]>v){a[j]=a[j-h];j-=h;}a[j]=v;}}h/=3;}
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
