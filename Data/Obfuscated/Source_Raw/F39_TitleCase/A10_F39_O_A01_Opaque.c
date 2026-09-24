/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A10_F39_O_A01_Opaque.c
 * Implementation Logic: A01 with opaque predicate if(x*x >= 0).
 * Input Format: <string>
 */
#include <stdio.h>
#include <ctype.h>

void r(char* FrP) {
    int Ui = 15;
    if ((Ui * Ui) >= 0) {
        int e = 1;
        for (int xKMT = 0; FrP[xKMT]; xKMT++) {
            if (isspace(FrP[xKMT])) e = 1;
            else if (e) { FrP[xKMT] = toupper(FrP[xKMT]); e = 0; }
            else FrP[xKMT] = tolower(FrP[xKMT]);
        }
    }
}

int main(int Sa, char* VO[]) {
    if (Sa < 2) return 0;
    r(VO[1]);
    printf("%s", VO[1]);
    return 0;
}