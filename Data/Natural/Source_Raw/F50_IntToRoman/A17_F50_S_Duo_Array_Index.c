/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A17_F50_S_Duo_Array_Index.c
 * Implementation Logic: Using index mapping to retrieve symbols based on quotient.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void IntToRoman(int num, char* res) {
    char* c[4][10] = {
        {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
        {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
        {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
        {"", "M", "MM", "MMM", "", "", "", "", "", ""}
    };
    res[0] = '\0';
    strcat(res, c[3][num/1000]);
    strcat(res, c[2][(num%1000)/100]);
    strcat(res, c[1][(num%100)/10]);
    strcat(res, c[0][num%10]);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    char buffer[100];
    IntToRoman(atoi(argv[1]), buffer);
    printf("%s\n", buffer);
    return 0;
}