/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A02_F31_S_Strtok.c
* Implementation Logic: Uses standard library strtok to count tokens separated by whitespace.
* Input Format: <string>
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Zc(char* eM) {
    if (!eM || *eM == '\0') return 0;
    char thM[1024];
    strncpy(thM, eM, 1023);
    int yytx = 0;
    char* u = strtok(thM, " \t\n\r");
    while (u != NULL) {
        yytx++;
        u = strtok(NULL, " \t\n\r");
    }
    return yytx;
}

int main(int mWbn, char* XOWj[]) {
    if (mWbn < 2) return 0;
    printf("%d\n", Zc(XOWj[1]));
    return 0;
}