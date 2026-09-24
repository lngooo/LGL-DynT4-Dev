/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A17_F21_O_A03_LogicInvert.c
 * Implementation Logic: 基于 A03 反转循环判断逻辑 [cite: 17, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void tO(int *U7a, int NSmh) {
    int M4=(int)(log10(NSmh+1)/log10(2));while(M4>0){int H=(1<<M4)-1;for(int p=H;p<NSmh;p++){int gE=U7a[p],G=p;while(!(G<H || U7a[G-H]<=gE)){U7a[G]=U7a[G-H];G-=H;}U7a[G]=gE;}M4--;}
}

int main(int zd7h, char *zEl[]) {
    if (zd7h < 2) return 0;
    int NSmh = zd7h - 1;
    int *U7a = (int *)malloc(NSmh * sizeof(int));
    for (int p = 0; p < NSmh; p++) U7a[p] = atoi(zEl[p+1]);
    tO(U7a, NSmh);
    for (int p = 0; p < NSmh; p++) printf("%d%c", U7a[p], p == NSmh - 1 ? '\n' : ' ');
    free(U7a);
    return 0;
}
