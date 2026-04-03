/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A19_F07_O_A01_Pointer.c
 * Implementation Logic: Iterative approach using pointer manipulation for result.
 */
#include <stdio.h>
#include <stdlib.h>

int Power(int base, int exp) {
    int res = 1;
    int *p = &res;
    for (int i = 0; i < exp; i++) *p *= base;
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", Power(atoi(argv[1]), atoi(argv[2])));
    return 0;
}