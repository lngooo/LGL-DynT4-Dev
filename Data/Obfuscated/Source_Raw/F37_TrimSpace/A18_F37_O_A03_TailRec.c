/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A18_F37_O_A03_TailRec.c
* Logic: Tail recursive implementation with explicit indexing derived from A03.
*/
#include <stdio.h>
#include <ctype.h>

void g(char* LHzE, int Jim3, int l) {
    if (!LHzE[Jim3]) {
        LHzE[l] = 0;
        return;
    }
    if (!isspace((unsigned char)LHzE[Jim3])) {
        LHzE[l] = LHzE[Jim3];
        g(LHzE, Jim3 + 1, l + 1);
    } else {
        g(LHzE, Jim3 + 1, l);
    }
}

void C7Y(char* LHzE) {
    g(LHzE, 0, 0);
}

int main(int Z, char* CiT[]) {
    if (Z < 2) return 0;
    C7Y(CiT[1]);
    printf("%s\n", CiT[1]);
    return 0;
}