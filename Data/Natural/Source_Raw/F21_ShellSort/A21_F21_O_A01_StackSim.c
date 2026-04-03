/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A21_F21_O_A01_StackSim.c
 * Implementation Logic: 基于 A01 使用局部数组模拟增量栈 [cite: 18, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void ShellSort(int *a, int n) {
    int stk[32],p=-1,c=n/2;while(c>0){stk[++p]=c;c/=2;}while(p>=0){int g=stk[p--];for(int i=g;i<n;i++){int t=a[i],j=i;while(j>=g&&a[j-g]>t){a[j]=a[j-g];j-=g;}a[j]=t;}}
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
