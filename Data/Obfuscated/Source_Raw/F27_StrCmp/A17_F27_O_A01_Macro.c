/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A17_F27_O_A01_Macro.c
 * Implementation Logic: Core predicates from A01 hidden behind functional macros.
 */
#include <stdio.h>
#include <stdlib.h>

#define MATCH(x, y) (*(x) == *(y))
#define EXISTS(x) (*(x) != '\0')

int Fm(const char *cwd6, const char *Z16Q) {
    while (EXISTS(cwd6) && MATCH(cwd6, Z16Q)) {
        cwd6++; Z16Q++;
    }
    return *(unsigned char *)cwd6 - *(unsigned char *)Z16Q;
}

int main(int H, char *Q[]) {
    if (H < 3) return 0;
    printf("%d\n", Fm(Q[1], Q[2]));
    return 0;
}