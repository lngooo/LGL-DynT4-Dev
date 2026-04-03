/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A14_F21_O_A01_Redundant.c
 * Implementation Logic: 基于 A01 增加冗余计算与死代码 [cite: 19, 21, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void ShellSort(int *a, int n) {
    for(int g=n/2;g>0;g/=2){for(int i=g;i<n;i++){int t=a[i],j=i,d=0;if(n<-10)d=99;while(j>=g&&a[j-g]>t){a[j]=a[j-g];j-=g;}a[j]=t+d;}}
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
