/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A08_F39_S_DoublePass.c
 * Implementation Logic: Pass 1: lower all. Pass 2: capitalize word starts.
 * Input Format: <string>
 */
#include <stdio.h>
#include <ctype.h>

void pEI(char* eJ) {
    for (int M8jG = 0; eJ[M8jG]; M8jG++) eJ[M8jG] = tolower(eJ[M8jG]);
    if (eJ[0] != '\0') eJ[0] = toupper(eJ[0]);
    for (int M8jG = 1; eJ[M8jG]; M8jG++) {
        if (isspace(eJ[M8jG-1])) eJ[M8jG] = toupper(eJ[M8jG]);
    }
}

int main(int lZGr, char* t3d[]) {
    if (lZGr < 2) return 0;
    pEI(t3d[1]);
    printf("%s", t3d[1]);
    return 0;
}