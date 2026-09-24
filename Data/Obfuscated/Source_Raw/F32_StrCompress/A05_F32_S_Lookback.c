/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A05_F32_S_Lookback.c
* Implementation Logic: Identifies transitions by looking back at the previous character.
*/
#include <stdio.h>
#include <string.h>

void Yfw(char* w) {
    int yZ = strlen(w);
    if (yZ == 0) return;
    int I8 = 1;
    char Ub6 = w[0];
    for (int e = 1; e <= yZ; e++) {
        if (w[e] == Ub6) {
            I8++;
        } else {
            printf("%c%d", Ub6, I8);
            Ub6 = w[e];
            I8 = 1;
        }
    }
    printf("\n");
}

int main(int jv, char* H0[]) {
    if (jv < 2) return 0;
    Yfw(H0[1]);
    return 0;
}