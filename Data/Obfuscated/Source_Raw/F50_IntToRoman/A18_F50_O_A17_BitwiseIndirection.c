/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A18_F50_O_A17_BitwiseIndirection.c
 * Implementation Logic: Replacing division in A17 with iterative subtraction.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void gG(int JXVn, char* v) {
    char* TQt[4][10] = {
        {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
        {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
        {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
        {"", "M", "MM", "MMM", "", "", "", "", "", ""}
    };
    int oo[4] = {0, 0, 0, 0};
    int tf = JXVn;
    while(tf >= 1000) { oo[3]++; tf -= 1000; }
    while(tf >= 100) { oo[2]++; tf -= 100; }
    while(tf >= 10) { oo[1]++; tf -= 10; }
    oo[0] = tf;
    v[0] = '\0';
    for(int VxeJ=3; VxeJ>=0; VxeJ--) strcat(v, TQt[VxeJ][oo[VxeJ]]);
}

int main(int OVq, char* LB[]) {
    if (OVq < 2) return 0;
    char b8D6[100];
    gG(atoi(LB[1]), b8D6);
    printf("%s\n", b8D6);
    return 0;
}