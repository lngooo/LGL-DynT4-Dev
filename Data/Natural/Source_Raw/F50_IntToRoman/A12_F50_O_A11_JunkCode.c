/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A12_F50_O_A11_JunkCode.c
 * Implementation Logic: Injected junk math into A11 to alter Token sequence.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void IntToRoman(int num, char* res) {
    char* sy[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int va[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    res[0] = '\0';
    int k = 0, garbage = 42;
    while(num > 0) {
        garbage = (garbage * 3) / 2;
        if (num >= va[k]) {
            strcat(res, sy[k]);
            num -= va[k];
        } else {
            k++;
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