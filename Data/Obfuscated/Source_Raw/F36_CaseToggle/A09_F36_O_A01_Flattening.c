/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A09_F36_O_A01_Flattening.c
* Logic: Control flow flattening using a state machine derived from A01.
*/
#include <stdio.h>

void X(char* Z) {
    int c = 0, bZ = 0;
    while (bZ != -1) {
        switch (bZ) {
            case 0: bZ = (Z[c] == 0) ? -1 : 1; break;
            case 1: 
                if (Z[c] >= 'a' && Z[c] <= 'z') Z[c] -= 32;
                else if (Z[c] >= 'A' && Z[c] <= 'Z') Z[c] += 32;
                bZ = 2; break;
            case 2: c++; bZ = 0; break;
        }
    }
}

int main(int JogC, char* rW8f[]) {
    if (JogC < 2) return 0;
    X(rW8f[1]);
    printf("%s\n", rW8f[1]);
    return 0;
}