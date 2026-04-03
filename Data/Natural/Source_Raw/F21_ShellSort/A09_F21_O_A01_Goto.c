/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A09_F21_O_A01_Goto.c
 * Implementation Logic: 基于 A01 的 Goto 标签链重构 [cite: 20, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void ShellSort(int *a, int n) {
    int g=n/2;L_G:if(g<=0)goto L_END;int i=g;L_I:if(i>=n){g/=2;goto L_G;}int t=a[i],j=i;L_W:if(j>=g&&a[j-g]>t){a[j]=a[j-g];j-=g;goto L_W;}a[j]=t;i++;goto L_I;L_END:;
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
