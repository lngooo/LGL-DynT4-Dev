/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A05_F15_O_A04_Ternary.c
 * Implementation Logic: Recursive max hidden in ternary nested logic.
 */
#include <stdio.h>
#include <stdlib.h>

int ffz5(int s9[], int g, int rh) {
    if (g == rh) return s9[g];
    int Fj = g + (rh-g)/2;
    int H8 = ffz5(s9, g, Fj), s = ffz5(s9, Fj+1, rh);
    return (H8 > s) ? H8 : s;
}

int RI7i(int wACV[], int eb) { return (eb > 0) ? ffz5(wACV, 0, eb-1) : 0; }

int main(int HP, char *ALv[]) {
    if (HP < 2) return 0;
    int eb = HP - 1;
    int *wACV = (int*)malloc(eb * sizeof(int));
    for (int FLQ = 0; FLQ < eb; FLQ++) wACV[FLQ] = atoi(ALv[FLQ+1]);
    printf("%d\n", RI7i(wACV, eb));
    free(wACV);
    return 0;
}