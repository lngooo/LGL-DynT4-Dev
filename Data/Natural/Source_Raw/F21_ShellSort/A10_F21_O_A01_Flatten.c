/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A10_F21_O_A01_Flatten.c
 * Implementation Logic: 基于 A01 的 Switch-Case 控制流平坦化 [cite: 18, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void ShellSort(int *a, int n) {
    int s=0,g,i,j,v;while(s!=4){switch(s){case 0:g=n/2;s=1;break;case 1:if(g>0){i=g;s=2;}else s=4;break;case 2:if(i<n){v=a[i];j=i;s=3;}else{g/=2;s=1;}break;case 3:while(j>=g&&a[j-g]>v){a[j]=a[j-g];j-=g;}a[j]=v;i++;s=2;break;}}
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
