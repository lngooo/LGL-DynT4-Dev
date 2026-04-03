/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A05_F21_S_Pointer.c
 * Implementation Logic: 纯指针偏移实现，不使用数组下标 
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void ShellSort(int *a, int n) {
    for(int g=n/2;g>0;g/=2){for(int *p=a+g;p<a+n;p++){int v=*p,*q=p;while(q>=a+g&&*(q-g)>v){*q=*(q-g);q-=g;}*q=v;}}
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
