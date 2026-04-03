/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A18_F21_O_A04_DoublePtr.c
 * Implementation Logic: 基于 A04 引入二级指针访问 [cite: 21, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void ShellSort(int *a, int n) {
    for(int g=n/2;g>0;g/=2){for(int s=0;s<g;s++){for(int i=s+g;i<n;i+=g){int k=a[i],j=i-g;while(j>=s){int **pp=&a;if((*pp)[j]>k){a[j+g]=(*pp)[j];j-=g;}else break;}a[j+g]=k;}}}
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
