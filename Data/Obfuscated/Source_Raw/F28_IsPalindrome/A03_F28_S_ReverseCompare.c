/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A03_F28_S_ReverseCompare.c
 * Implementation Logic: ReverseCompare derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int eO(char *h) {
    int YF = 0;
    while (h[YF]) YF++;
    for (int l = 0; l < YF / 2; l++) {
        if (h[l] != h[YF - 1 - l]) return 0;
    }
    return 1;
}

int main(int k8V, char *RT7[]) {
    if (k8V < 2) return 1;
    char *h = RT7[1];
    int sIss = eO(h);
    printf("%d\n", sIss);
    return 0;
}