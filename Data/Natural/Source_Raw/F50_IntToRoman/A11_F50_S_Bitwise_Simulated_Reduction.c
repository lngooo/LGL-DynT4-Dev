/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A11_F50_S_Bitwise_Simulated_Reduction.c
 * Implementation Logic: Using bit-shifts to approximate division for place values.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void IntToRoman(int num, char* res) {
    char* syms[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int vals[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    res[0] = '\0';
    int idx = 0;
    while(num > 0) {
        if (num >= vals[idx]) {
            strcat(res, syms[idx]);
            num = num - vals[idx];
        } else {
            idx = idx + 1;
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