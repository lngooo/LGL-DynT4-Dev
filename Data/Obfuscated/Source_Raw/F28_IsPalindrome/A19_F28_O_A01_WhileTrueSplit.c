/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A19_F28_O_A01_WhileTrueSplit.c
 * Implementation Logic: WhileTrueSplit derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int d(char *m6) {
    int l = 0;
    int T = 0; while (m6[T]) T++;
    int a = T - 1;
    while(1) {
        if(l >= a) break;
        if(m6[l] != m6[a]) return 0;
        l++; a--;
    }
    return 1;
}

int main(int YRon, char *y[]) {
    if (YRon < 2) return 1;
    char *m6 = y[1];
    int OHm = d(m6);
    printf("%d\n", OHm);
    return 0;
}