/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A09_F37_O_A01_Flattening.c
* Logic: Control flow flattening with state machine derived from A01.
*/
#include <stdio.h>
#include <ctype.h>

void jqhN(char* B) {
    int Pc3 = 0, Ss = 0, bYK = 0;
    while (bYK != -1) {
        switch (bYK) {
            case 0: bYK = (B[Pc3] == 0) ? 3 : 1; break;
            case 1: if (!isspace((unsigned char)B[Pc3])) { B[Ss] = B[Pc3]; Ss++; } bYK = 2; break;
            case 2: Pc3++; bYK = 0; break;
            case 3: B[Ss] = 0; bYK = -1; break;
        }
    }
}

int main(int z2eE, char* VeXH[]) {
    if (z2eE < 2) return 0;
    jqhN(VeXH[1]);
    printf("%s\n", VeXH[1]);
    return 0;
}