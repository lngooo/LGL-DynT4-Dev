/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A15_F45_O_A05_Alias.c
 * Implementation Logic: Array-based aliasing and redundant data flow derived from A05.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int o2Ot(unsigned int bgNf) {
    unsigned int pax[3];
    pax[0] = bgNf;
    pax[1] = bgNf >> 1;
    pax[2] = pax[0] ^ pax[1];
    unsigned int *UVZO = &pax[2];
    return *UVZO;
}

int main(int Ut, char* jqpw[]) {
    if (Ut < 2) return 0;
    unsigned int bgNf = (unsigned int)strtoul(jqpw[1], NULL, 10);
    printf("%u", o2Ot(bgNf));
    return 0;
}