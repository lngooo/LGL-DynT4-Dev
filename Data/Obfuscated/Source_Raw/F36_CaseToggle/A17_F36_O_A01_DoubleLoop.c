/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A17_F36_O_A01_DoubleLoop.c
* Logic: Nested loop with a single execution inner loop derived from A01.
*/
#include <stdio.h>

void P1M(char* zYMH) {
    for (int OoPe = 0; zYMH[OoPe]; OoPe++) {
        for (int DL = 0; DL < 1; DL++) {
            char Rh0A = zYMH[OoPe];
            if (Rh0A >= 97 && Rh0A <= 122) zYMH[OoPe] = Rh0A - 32;
            else if (Rh0A >= 65 && Rh0A <= 90) zYMH[OoPe] = Rh0A + 32;
        }
    }
}

int main(int MJVs, char* A[]) {
    if (MJVs < 2) return 0;
    P1M(A[1]);
    printf("%s\n", A[1]);
    return 0;
}