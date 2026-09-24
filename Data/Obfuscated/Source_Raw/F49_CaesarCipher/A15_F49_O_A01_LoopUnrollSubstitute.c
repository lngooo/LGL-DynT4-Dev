/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A15_F49_O_A01_LoopUnrollSubstitute.c
 * Implementation Logic: A15_F49_O_A01_LoopUnrollSubstitute
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void FC(char *Dnn8, int A) {

    int z = (A % 26 + 26) % 26;
    for(int tUEb=0; Dnn8[tUEb]; tUEb++) {
        if(Dnn8[tUEb] >= 'a' && Dnn8[tUEb] <= 'z') { Dnn8[tUEb] = (Dnn8[tUEb]-'a'+z)%26+'a'; continue; }
        if(Dnn8[tUEb] >= 'A' && Dnn8[tUEb] <= 'Z') { Dnn8[tUEb] = (Dnn8[tUEb]-'A'+z)%26+'A'; }
    }
}

int main(int anJx, char *p[]) {
    if (anJx < 3) {
        return 1;
    }
    int A = atoi(p[2]);
    FC(p[1], A);
    printf("%s\n", p[1]);
    return 0;
}
