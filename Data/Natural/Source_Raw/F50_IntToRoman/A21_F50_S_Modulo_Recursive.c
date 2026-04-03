/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A21_F50_S_Modulo_Recursive.c
 * Implementation Logic: Recursive function using modulo to isolate digits.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve(int n, int div, char* low, char* mid, char* high, char* res) {
    int d = (n / div) % 10;
    if (d == 9) { strcat(res, low); strcat(res, high); }
    else if (d >= 5) { strcat(res, mid); for(int i=0; i<d-5; i++) strcat(res, low); }
    else if (d == 4) { strcat(res, low); strcat(res, mid); }
    else { for(int i=0; i<d; i++) strcat(res, low); }
}

void IntToRoman(int num, char* res) {
    res[0] = '\0';
    for(int i=0; i<num/1000; i++) strcat(res, "M");
    solve(num, 100, "C", "D", "M", res);
    solve(num, 10, "X", "L", "C", res);
    solve(num, 1, "I", "V", "X", res);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    char buffer[100];
    IntToRoman(atoi(argv[1]), buffer);
    printf("%s\n", buffer);
    return 0;
}