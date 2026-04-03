/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A01_F50_S_Greedy_Arrays.c
 * Implementation Logic: Standard greedy approach using parallel arrays of values and symbols.
 * Input Format: <int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void IntToRoman(int num, char* res) {
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    res[0] = '\0';
    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            strcat(res, symbols[i]);
            num -= values[i];
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