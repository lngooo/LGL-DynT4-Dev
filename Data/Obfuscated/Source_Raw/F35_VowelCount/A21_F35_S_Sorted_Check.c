/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A21_F35_S_Sorted_Check.c
 * Logic: Check character against a sorted list using a small range check.
 */
#include <stdio.h>
#include <stdlib.h>

int pm7N(const char* cs) {
    int By = 0;
    while (*cs) {
        char nIa = *cs;
        if ((nIa >= 65 && nIa <= 117)) { // Range between 'A' and 'u'
            if (nIa=='a'||nIa=='e'||nIa=='i'||nIa=='o'||nIa=='u'||nIa=='A'||nIa=='E'||nIa=='I'||nIa=='O'||nIa=='U')
                By++;
        }
        cs++;
    }
    return By;
}

int main(int DP, char* XHg[]) {
    if (DP < 2) { printf("0\n"); return 0; }
    printf("%d\n", pm7N(XHg[1]));
    return 0;
}