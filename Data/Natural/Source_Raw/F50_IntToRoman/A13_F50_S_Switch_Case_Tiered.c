/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A13_F50_S_Switch_Case_Tiered.c
 * Implementation Logic: Tiered conversion using switch-case for remainders.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void append(char* r, int n, char* s) { for(int i=0; i<n; i++) strcat(r, s); }

void IntToRoman(int num, char* res) {
    res[0] = '\0';
    append(res, num/1000, "M");
    num %= 1000;
    if (num >= 900) { strcat(res, "CM"); num -= 900; }
    else if (num >= 500) { strcat(res, "D"); num -= 500; append(res, num/100, "C"); }
    else if (num >= 400) { strcat(res, "CD"); num -= 400; }
    else append(res, num/100, "C");
    num %= 100;
    if (num >= 90) { strcat(res, "XC"); num -= 90; }
    else if (num >= 50) { strcat(res, "L"); num -= 50; append(res, num/10, "X"); }
    else if (num >= 40) { strcat(res, "XL"); num -= 40; }
    else append(res, num/10, "X");
    num %= 10;
    if (num >= 9) { strcat(res, "IX"); }
    else if (num >= 5) { strcat(res, "V"); append(res, num-5, "I"); }
    else if (num == 4) { strcat(res, "IV"); }
    else append(res, num, "I");
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    char buffer[100];
    IntToRoman(atoi(argv[1]), buffer);
    printf("%s\n", buffer);
    return 0;
}