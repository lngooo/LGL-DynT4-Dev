/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A12_F34_O_A01_VarSplit.c
* Logic: Splitting count variable into c1 and c2 derived from A01.
*/
#include <stdio.h>

int oWB3(char* Ip, char G) {
    int IR = 0, Abv = 0;
    for (int KW = 0; Ip[KW]; KW++) {
        if (Ip[KW] == G) {
            if (KW % 2 == 0) IR++; else Abv++;
        }
    }
    return IR + Abv;
}

int main(int VbFY, char* zR7h[]) {
    if (VbFY < 3) return 0;
    printf("%d\n", oWB3(zR7h[1], zR7h[2][0]));
    return 0;
}