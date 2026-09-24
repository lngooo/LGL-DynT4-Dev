/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A06_F50_O_A05_Goto.c
 * Implementation Logic: Goto-based reconstruction of A05.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void QLa(int Oe0M, char* MF32) {
    MF32[0] = '\0';
i1rv:
    if (Oe0M < 1000) goto Jr;
    strcat(MF32, "M"); Oe0M -= 1000; goto i1rv;
Jr:
    if (Oe0M < 900) goto n;
    strcat(MF32, "CM"); Oe0M -= 900;
n:
    if (Oe0M < 500) goto yNr;
    strcat(MF32, "D"); Oe0M -= 500;
yNr:
    if (Oe0M < 400) goto t;
    strcat(MF32, "CD"); Oe0M -= 400;
t:
    if (Oe0M < 100) goto cDn;
    strcat(MF32, "C"); Oe0M -= 100; goto t;
cDn:
    if (Oe0M < 90) goto WXy;
    strcat(MF32, "XC"); Oe0M -= 90;
WXy:
    if (Oe0M < 50) goto tGaK;
    strcat(MF32, "L"); Oe0M -= 50;
tGaK:
    if (Oe0M < 40) goto FOO;
    strcat(MF32, "XL"); Oe0M -= 40;
FOO:
    if (Oe0M < 10) goto Kq;
    strcat(MF32, "X"); Oe0M -= 10; goto FOO;
Kq:
    if (Oe0M < 9) goto v;
    strcat(MF32, "IX"); Oe0M -= 9;
v:
    if (Oe0M < 5) goto i;
    strcat(MF32, "V"); Oe0M -= 5;
i:
    if (Oe0M < 4) goto akTN;
    strcat(MF32, "IV"); Oe0M -= 4;
akTN:
    if (Oe0M < 1) return;
    strcat(MF32, "I"); Oe0M -= 1; goto akTN;
}

int main(int rjP, char* Z[]) {
    if (rjP < 2) return 0;
    char fw[100];
    QLa(atoi(Z[1]), fw);
    printf("%s\n", fw);
    return 0;
}