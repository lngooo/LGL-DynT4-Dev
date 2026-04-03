/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A13_F21_O_A05_Bitshift.c
 * Implementation Logic: 基于 A05 使用位移代替乘除指令 [cite: 22, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void ShellSort(int *a, int n) {
    for(int g=n>>1;g>0;g>>=1){for(int *pi=a+g;pi<a+n;pi++){int v=*pi,*pj=pi;while(pj>=a+g&&*(pj-g)>v){*pj=*(pj-g);pj-=g;}*pj=v;}}
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
