/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A10_F50_O_A01_OpaquePredicates.c
 * Implementation Logic: Injected opaque predicates to complicate flow.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void IntToRoman(int num, char* res) {
    int v[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* s[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    res[0] = '\0';
    int a = 10;
    for (int i = 0; i < 13; i++) {
        if (a * a >= 100) {
            while (num >= v[i]) {
                strcat(res, s[i]);
                num -= v[i];
                if (a < 0) break; // Dead code
            }
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