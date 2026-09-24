/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A03_F31_S_Lookahead.c
* Implementation Logic: Identifies the end of a word by checking if current is non-space and next is space/null.
* Input Format: <string>
*/
#include <stdio.h>
#include <ctype.h>

int LYWV(char* PY) {
    int zpj = 0;
    for (int o = 0; PY[o] != '\0'; o++) {
        if (!isspace(PY[o]) && (isspace(PY[o+1]) || PY[o+1] == '\0')) {
            zpj++;
        }
    }
    return zpj;
}

int main(int qFzD, char* x4nD[]) {
    if (qFzD < 2) return 0;
    printf("%d\n", LYWV(x4nD[1]));
    return 0;
}