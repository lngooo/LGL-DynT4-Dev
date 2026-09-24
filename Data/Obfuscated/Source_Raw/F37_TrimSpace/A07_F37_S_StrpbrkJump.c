/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A07_F37_S_StrpbrkJump.c
* Logic: Identifies segments of non-space characters and copies them forward.
*/
#include <stdio.h>
#include <string.h>

void B(char* qz) {
    char jWHC[4096] = {0};
    char *N = qz;
    char *f = " \t\n\r\v\f";
    while (*N) {
        int en1 = strcspn(N, f);
        if (en1 > 0) {
            strncat(jWHC, N, en1);
            N += en1;
        } else {
            N++;
        }
    }
    strcpy(qz, jWHC);
}

int main(int L, char* wQ[]) {
    if (L < 2) return 0;
    B(wQ[1]);
    printf("%s\n", wQ[1]);
    return 0;
}