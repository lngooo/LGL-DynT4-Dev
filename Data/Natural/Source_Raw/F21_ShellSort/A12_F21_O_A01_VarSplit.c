/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A12_F21_O_A01_VarSplit.c
 * Implementation Logic: 基于 A01 进行变量拆分混淆 (g=x+y) [cite: 21, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void ShellSort(int *a, int n) {
    int x=n/4,y=n/4;for(int g=x+y+n%2/2;g>0;g/=2){for(int i=g;i<n;i++){int v_l=a[i]%10,v_h=a[i]/10,j=i;while(j>=g&&a[j-g]>(v_h*10+v_l)){a[j]=a[j-g];j-=g;}a[j]=(v_h*10+v_l);}}
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
