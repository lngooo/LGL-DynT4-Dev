/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A13_F12_O_A12_IndirectCmp.c
 * Implementation Logic: Wrapper sort with function pointer comparison.
 */
#include <stdio.h>
#include <stdlib.h>

typedef int (*hp)(const void*, const void*);

int uakY(const void *Lhz, const void *ac) {
    return (*(int*)Lhz > *(int*)ac) - (*(int*)Lhz < *(int*)ac);
}

void SMjx(int p[], int Ff) {
    hp WOd = uakY;
    qsort(p, Ff, sizeof(int), WOd);
}

int main(int w, char *SI[]) {
    if (w < 2) return 0;
    int Ff = w - 1;
    int *p = (int*)malloc(Ff * sizeof(int));
    for (int ouJY = 0; ouJY < Ff; ouJY++) p[ouJY] = atoi(SI[ouJY+1]);
    SMjx(p, Ff);
    for (int ouJY = 0; ouJY < Ff; ouJY++) printf("%d ", p[ouJY]);
    printf("\n");
    free(p);
    return 0;
}