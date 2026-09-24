/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A17_F50_S_Duo_Array_Index.c
 * Implementation Logic: Using index mapping to retrieve symbols based on quotient.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void n8iN(int EnW, char* GQn3) {
    char* w[4][10] = {
        {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
        {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
        {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
        {"", "M", "MM", "MMM", "", "", "", "", "", ""}
    };
    GQn3[0] = '\0';
    strcat(GQn3, w[3][EnW/1000]);
    strcat(GQn3, w[2][(EnW%1000)/100]);
    strcat(GQn3, w[1][(EnW%100)/10]);
    strcat(GQn3, w[0][EnW%10]);
}

int main(int xCT6, char* M6[]) {
    if (xCT6 < 2) return 0;
    char QC[100];
    n8iN(atoi(M6[1]), QC);
    printf("%s\n", QC);
    return 0;
}