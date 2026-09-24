/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A08_F45_O_A01_Flattening.c
 * Implementation Logic: Control Flow Flattening using state machine derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int e(unsigned int nuW) {
    unsigned int rA;
    int bCuy = 1;
    while (bCuy != 0) {
        switch (bCuy) {
            case 1: rA = nuW ^ (nuW >> 1); bCuy = 0; break;
        }
    }
    return rA;
}

int main(int sL4, char* zBC[]) {
    if (sL4 < 2) return 0;
    unsigned int nuW = (unsigned int)strtoul(zBC[1], NULL, 10);
    printf("%u", e(nuW));
    return 0;
}