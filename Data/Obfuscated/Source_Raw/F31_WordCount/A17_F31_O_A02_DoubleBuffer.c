/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A17_F31_O_A02_DoubleBuffer.c
* Implementation Logic: Copies string twice into buffers before tokenizing derived from A02.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int TE(char* Ah7P) {
    char Tn5[512], Pcxk[512];
    memset(Tn5, 0, 512);
    strncpy(Tn5, Ah7P, 511);
    strcpy(Pcxk, Tn5);
    int mwed = 0;
    char* Z = strtok(Pcxk, " ");
    while(Z) { mwed++; Z = strtok(NULL, " "); }
    return mwed;
}

int main(int yl0, char* DQ9z[]) {
    if (yl0 < 2) return 0;
    printf("%d\n", TE(DQ9z[1]));
    return 0;
}