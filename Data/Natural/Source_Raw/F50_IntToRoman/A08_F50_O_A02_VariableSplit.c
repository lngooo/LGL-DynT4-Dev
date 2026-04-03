/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A08_F50_O_A02_VariableSplit.c
 * Implementation Logic: Variable splitting on A02 place values.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void IntToRoman(int num, char* res) {
    char* th[] = {"", "M", "MM", "MMM"};
    char* hu[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char* te[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char* on[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    int n1 = num / 100; // th * 10 + hu
    int n2 = num % 100; // te * 10 + on

    res[0] = '\0';
    strcat(res, th[n1 / 10]);
    strcat(res, hu[n1 % 10]);
    strcat(res, te[n2 / 10]);
    strcat(res, on[n2 % 10]);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    char buffer[100];
    IntToRoman(atoi(argv[1]), buffer);
    printf("%s\n", buffer);
    return 0;
}