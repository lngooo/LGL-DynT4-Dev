/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A16_F36_O_A03_PointerMap.c
* Logic: Pointer-based table access derived from A03.
*/
#include <stdio.h>

void LpI(char* T) {
    char Kau[256];
    for(int QT=0; QT<256; QT++) Kau[QT] = (char)QT;
    for(int QT='a'; QT<='z'; QT++) Kau[QT] = (char)(QT - 32);
    for(int QT='A'; QT<='Z'; QT++) Kau[QT] = (char)(QT + 32);

    char *u = T;
    while(*u) {
        *u = *(Kau + (unsigned char)*u);
        u++;
    }
}

int main(int cq, char* Z[]) {
    if (cq < 2) return 0;
    LpI(Z[1]);
    printf("%s\n", Z[1]);
    return 0;
}