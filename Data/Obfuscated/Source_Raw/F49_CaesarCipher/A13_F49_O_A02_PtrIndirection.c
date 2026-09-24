/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A13_F49_O_A02_PtrIndirection.c
 * Implementation Logic: A13_F49_O_A02_PtrIndirection
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void NmoW(char *Hr, int in9) {

    char *FQe = Hr;
    int Ma = (in9 % 26 + 26) % 26;
    while(*FQe != 0) {
        char **v0u3 = &FQe;
        if(**v0u3 >= 'A' && **v0u3 <= 'Z') **v0u3 = (**v0u3 - 'A' + Ma) % 26 + 'A';
        else if(**v0u3 >= 'a' && **v0u3 <= 'z') **v0u3 = (**v0u3 - 'a' + Ma) % 26 + 'a';
        FQe++;
    }
}

int main(int v, char *Svi[]) {
    if (v < 3) {
        return 1;
    }
    int in9 = atoi(Svi[2]);
    NmoW(Svi[1], in9);
    printf("%s\n", Svi[1]);
    return 0;
}
