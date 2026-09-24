/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A10_F31_O_A03_Opaque.c
* Implementation Logic: Injected opaque predicates derived from A03.
*/
#include <stdio.h>
#include <ctype.h>

int o0(char* B) {
    int rv8G = 0;
    int FUz = 5, L = 10;
    for (int Z3q = 0; B[Z3q] != '\0'; Z3q++) {
        if (FUz + L == 15) {
            if (!isspace(B[Z3q]) && (isspace(B[Z3q+1]) || B[Z3q+1] == '\0')) rv8G++;
        } else {
            rv8G--; // Never reached
        }
    }
    return rv8G;
}

int main(int j, char* Yo[]) {
    if (j < 2) return 0;
    printf("%d\n", o0(Yo[1]));
    return 0;
}