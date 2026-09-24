/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A17_F11_O_A08_Long.c
 * Implementation Logic: Jump search using long long for indices.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int WnAJ(int lxJJ[], int qtKw, int Vi23) {
    long long V = qtKw, CY = Vi23;
    long long gn = sqrt(V), YvZJ = 0;
    while (lxJJ[(gn < V ? gn : V) - 1] < CY) {
        YvZJ = gn; gn += sqrt(V);
        if (YvZJ >= V) return -1;
    }
    while (lxJJ[YvZJ] < CY) {
        YvZJ++;
        if (YvZJ == (gn < V ? gn : V)) return -1;
    }
    return (lxJJ[YvZJ] == CY) ? (int)YvZJ : -1;
}

int main(int k, char *OaZf[]) {
    if (k < 3) return 1;
    int Vi23 = atoi(OaZf[1]);
    int qtKw = k - 2;
    int *lxJJ = (int*)malloc(qtKw * sizeof(int));
    for(int E7=0; E7<qtKw; E7++) lxJJ[E7] = atoi(OaZf[E7+2]);
    printf("%d\n", WnAJ(lxJJ, qtKw, Vi23));
    free(lxJJ);
    return 0;
}