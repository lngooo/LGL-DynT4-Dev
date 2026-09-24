/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A12_F45_O_A04_Logic.c
 * Implementation Logic: Replacing arithmetic subtraction with bitwise NOT and AND derived from A04.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int h4cd(unsigned int Mlod) {
    unsigned int BAb = Mlod;
    unsigned int f = Mlod >> 1;
    // (a|b)-(a&b) equivalent to (a|b) & ~(a&b)
    return (BAb | f) & ~(BAb & f);
}

int main(int Jp, char* Df[]) {
    if (Jp < 2) return 0;
    unsigned int Mlod = (unsigned int)strtoul(Df[1], NULL, 10);
    printf("%u", h4cd(Mlod));
    return 0;
}