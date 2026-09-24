/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A15_F31_O_A08_PtrWrap.c
* Implementation Logic: Uses pointer to pointer to manipulate string access derived from A08.
*/
#include <stdio.h>
#include <string.h>

int kPX(char* F) {
    char** Ss = &F;
    int z = 0;
    int QkS = (int)strlen(*Ss);
    for (int ZCw8 = 0; ZCw8 < QkS; ZCw8++) {
        char sPT = (*Ss)[ZCw8];
        char AZ7p = (ZCw8 == 0) ? ' ' : (*Ss)[ZCw8-1];
        if ((sPT != ' ' && sPT != '\t') && (AZ7p == ' ' || AZ7p == '\t')) z++;
    }
    return z;
}

int main(int Qun, char* Dj[]) {
    if (Qun < 2) return 0;
    printf("%d\n", kPX(Dj[1]));
    return 0;
}