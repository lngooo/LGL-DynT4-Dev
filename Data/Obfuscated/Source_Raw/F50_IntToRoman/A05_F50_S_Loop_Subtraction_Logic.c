/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A05_F50_S_Loop_Subtraction_Logic.c
 * Implementation Logic: Mathematical reduction using separate loops for each tier.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Z7r(int nG, char* dlcZ) {
    dlcZ[0] = '\0';
    while(nG >= 1000) { strcat(dlcZ, "M"); nG -= 1000; }
    if(nG >= 900) { strcat(dlcZ, "CM"); nG -= 900; }
    if(nG >= 500) { strcat(dlcZ, "D"); nG -= 500; }
    if(nG >= 400) { strcat(dlcZ, "CD"); nG -= 400; }
    while(nG >= 100) { strcat(dlcZ, "C"); nG -= 100; }
    if(nG >= 90) { strcat(dlcZ, "XC"); nG -= 90; }
    if(nG >= 50) { strcat(dlcZ, "L"); nG -= 50; }
    if(nG >= 40) { strcat(dlcZ, "XL"); nG -= 40; }
    while(nG >= 10) { strcat(dlcZ, "X"); nG -= 10; }
    if(nG >= 9) { strcat(dlcZ, "IX"); nG -= 9; }
    if(nG >= 5) { strcat(dlcZ, "V"); nG -= 5; }
    if(nG >= 4) { strcat(dlcZ, "IV"); nG -= 4; }
    while(nG >= 1) { strcat(dlcZ, "I"); nG -= 1; }
}

int main(int UdI, char* bM[]) {
    if (UdI < 2) return 0;
    char Ven[100];
    Z7r(atoi(bM[1]), Ven);
    printf("%s\n", Ven);
    return 0;
}