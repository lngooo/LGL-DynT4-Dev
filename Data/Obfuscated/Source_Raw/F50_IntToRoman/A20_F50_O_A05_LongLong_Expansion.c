/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A20_F50_O_A05_LongLong_Expansion.c
 * Implementation Logic: Using long long for redundant intermediate counters.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void k(int eG, char* z) {
    long long P = eG;
    z[0] = '\0';
    while(P >= 1000LL) { strcat(z, "M"); P -= 1000; }
    if(P >= 900LL) { strcat(z, "CM"); P -= 900; }
    if(P >= 500LL) { strcat(z, "D"); P -= 500; }
    if(P >= 400LL) { strcat(z, "CD"); P -= 400; }
    while(P >= 100LL) { strcat(z, "C"); P -= 100; }
    if(P >= 90LL) { strcat(z, "XC"); P -= 90; }
    if(P >= 50LL) { strcat(z, "L"); P -= 50; }
    if(P >= 40LL) { strcat(z, "XL"); P -= 40; }
    while(P >= 10LL) { strcat(z, "X"); P -= 10; }
    if(P >= 9LL) { strcat(z, "IX"); P -= 9; }
    if(P >= 5LL) { strcat(z, "V"); P -= 5; }
    if(P >= 4LL) { strcat(z, "IV"); P -= 4; }
    while(P >= 1LL) { strcat(z, "I"); P -= 1; }
}

int main(int goY, char* rQE[]) {
    if (goY < 2) return 0;
    char S4dT[100];
    k(atoi(rQE[1]), S4dT);
    printf("%s\n", S4dT);
    return 0;
}