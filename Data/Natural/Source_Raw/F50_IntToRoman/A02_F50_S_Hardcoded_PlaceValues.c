/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A02_F50_S_Hardcoded_PlaceValues.c
 * Implementation Logic: Static lookup tables for thousands, hundreds, tens, and ones.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void IntToRoman(int num, char* res) {
    char* thousands[] = {"", "M", "MM", "MMM"};
    char* hundreds[]  = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char* tens[]      = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char* ones[]      = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    res[0] = '\0';
    strcat(res, thousands[num / 1000]);
    strcat(res, hundreds[(num % 1000) / 100]);
    strcat(res, tens[(num % 100) / 10]);
    strcat(res, ones[num % 10]);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    char buffer[100];
    IntToRoman(atoi(argv[1]), buffer);
    printf("%s\n", buffer);
    return 0;
}