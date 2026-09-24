/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A20_F34_O_A04_WhileTrue.c
* Logic: while(1) loop with manual break and pointer casting derived from A04.
*/
#include <stdio.h>
#include <string.h>

int Hz(char* Lzmi, char Nsl) {
    int O8 = 0;
    char* RI = Lzmi;
    while (1) {
        RI = strchr(RI, Nsl);
        if (RI == NULL) break;
        O8++;
        RI++;
    }
    return O8;
}

int main(int Yz1, char* mI[]) {
    if (Yz1 < 3) return 0;
    printf("%d\n", Hz(mI[1], mI[2][0]));
    return 0;
}