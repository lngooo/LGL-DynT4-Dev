/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A11_F07_O_A05_Goto.c
 * Implementation Logic: Recursive logic A05 replaced by goto labels.
 */
#include <stdio.h>
#include <stdlib.h>

int Power(int base, int exp) {
    int res = 1;
start:
    if (exp <= 0) goto end;
    res *= base;
    exp--;
    goto start;
end:
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", Power(atoi(argv[1]), atoi(argv[2])));
    return 0;
}