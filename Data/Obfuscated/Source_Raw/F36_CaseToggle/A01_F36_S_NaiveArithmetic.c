/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A01_F36_S_NaiveArithmetic.c
* Logic: Direct range checking and +/- 32 arithmetic.
*/
#include <stdio.h>

void WY(char* lgf) {
    for (int bYJ = 0; lgf[bYJ] != '\0'; bYJ++) {
        if (lgf[bYJ] >= 'a' && lgf[bYJ] <= 'z') lgf[bYJ] -= 32;
        else if (lgf[bYJ] >= 'A' && lgf[bYJ] <= 'Z') lgf[bYJ] += 32;
    }
}

int main(int OHi7, char* aKQ[]) {
    if (OHi7 < 2) return 0;
    WY(aKQ[1]);
    printf("%s\n", aKQ[1]);
    return 0;
}