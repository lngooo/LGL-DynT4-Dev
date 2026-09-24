/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A10_F50_O_A01_OpaquePredicates.c
 * Implementation Logic: Injected opaque predicates to complicate flow.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void A(int pi, char* UjoP) {
    int hCNG[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* j[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    UjoP[0] = '\0';
    int oE = 10;
    for (int c = 0; c < 13; c++) {
        if (oE * oE >= 100) {
            while (pi >= hCNG[c]) {
                strcat(UjoP, j[c]);
                pi -= hCNG[c];
                if (oE < 0) break; // Dead code
            }
        }
    }
}

int main(int u0r3, char* dQ4J[]) {
    if (u0r3 < 2) return 0;
    char ZDC[100];
    A(atoi(dQ4J[1]), ZDC);
    printf("%s\n", ZDC);
    return 0;
}