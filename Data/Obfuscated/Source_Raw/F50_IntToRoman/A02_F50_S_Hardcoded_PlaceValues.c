/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A02_F50_S_Hardcoded_PlaceValues.c
 * Implementation Logic: Static lookup tables for thousands, hundreds, tens, and ones.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void a2(int jmzZ, char* d) {
    char* K[] = {"", "M", "MM", "MMM"};
    char* Af[]  = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char* ziag[]      = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char* uw5u[]      = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    d[0] = '\0';
    strcat(d, K[jmzZ / 1000]);
    strcat(d, Af[(jmzZ % 1000) / 100]);
    strcat(d, ziag[(jmzZ % 100) / 10]);
    strcat(d, uw5u[jmzZ % 10]);
}

int main(int RGA8, char* vFQ[]) {
    if (RGA8 < 2) return 0;
    char uuWW[100];
    a2(atoi(vFQ[1]), uuWW);
    printf("%s\n", uuWW);
    return 0;
}