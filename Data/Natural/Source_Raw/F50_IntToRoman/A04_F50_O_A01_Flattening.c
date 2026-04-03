/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A04_F50_O_A01_Flattening.c
 * Implementation Logic: Control-flow flattening version of A01.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void IntToRoman(int num, char* res) {
    int v[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* s[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int state = 0;
    int i = 0;
    res[0] = '\0';
    while (state != -1) {
        switch(state) {
            case 0: if (i < 13) state = 1; else state = -1; break;
            case 1: if (num >= v[i]) { strcat(res, s[i]); num -= v[i]; } else { i++; state = 0; } break;
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    char buffer[100];
    IntToRoman(atoi(argv[1]), buffer);
    printf("%s\n", buffer);
    return 0;
}