/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A10_F37_O_A01_Opaque.c
* Logic: Opaque predicates injected into iteration logic derived from A01.
*/
#include <stdio.h>
#include <ctype.h>

void Sq(char* I) {
    int z = 0, Jjgr = 0;
    int C = 42;
    while (I[z]) {
        if ((C * 2) % 2 == 0) {
            if (!isspace((unsigned char)I[z])) {
                I[Jjgr++] = I[z];
            }
            z++;
        } else {
            z--; // dead code
        }
    }
    I[Jjgr] = '\0';
}

int main(int AH2, char* Y[]) {
    if (AH2 < 2) return 0;
    Sq(Y[1]);
    printf("%s\n", Y[1]);
    return 0;
}