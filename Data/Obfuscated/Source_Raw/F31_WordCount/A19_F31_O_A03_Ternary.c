/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A19_F31_O_A03_Ternary.c
* Implementation Logic: Replaces if-else with complex ternary expressions derived from A03.
*/
#include <stdio.h>
#include <ctype.h>

int jc4(char* pG) {
    int r6mU = 0;
    for (int Ac = 0; pG[Ac]; Ac++) {
        r6mU += (!isspace(pG[Ac]) && (isspace(pG[Ac+1]) || pG[Ac+1] == 0)) ? 1 : 0;
    }
    return r6mU;
}

int main(int O, char* TvZ[]) {
    if (O < 2) return 0;
    printf("%d\n", jc4(TvZ[1]));
    return 0;
}