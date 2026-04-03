/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A20_F50_O_A05_LongLong_Expansion.c
 * Implementation Logic: Using long long for redundant intermediate counters.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void IntToRoman(int num, char* res) {
    long long n = num;
    res[0] = '\0';
    while(n >= 1000LL) { strcat(res, "M"); n -= 1000; }
    if(n >= 900LL) { strcat(res, "CM"); n -= 900; }
    if(n >= 500LL) { strcat(res, "D"); n -= 500; }
    if(n >= 400LL) { strcat(res, "CD"); n -= 400; }
    while(n >= 100LL) { strcat(res, "C"); n -= 100; }
    if(n >= 90LL) { strcat(res, "XC"); n -= 90; }
    if(n >= 50LL) { strcat(res, "L"); n -= 50; }
    if(n >= 40LL) { strcat(res, "XL"); n -= 40; }
    while(n >= 10LL) { strcat(res, "X"); n -= 10; }
    if(n >= 9LL) { strcat(res, "IX"); n -= 9; }
    if(n >= 5LL) { strcat(res, "V"); n -= 5; }
    if(n >= 4LL) { strcat(res, "IV"); n -= 4; }
    while(n >= 1LL) { strcat(res, "I"); n -= 1; }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    char buffer[100];
    IntToRoman(atoi(argv[1]), buffer);
    printf("%s\n", buffer);
    return 0;
}