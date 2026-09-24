/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A13_F08_O_A12_Indirect.c
 * Implementation Logic: Calling abs() via function pointer.
 */
#include <stdio.h>
#include <stdlib.h>

typedef int (*q2u)(int);

int S1Vu(int Cro) {
    q2u m = abs;
    return m(Cro);
}

int main(int XX, char *j[]) {
    if (XX < 2) return 1;
    printf("%d\n", S1Vu(atoi(j[1])));
    return 0;
}