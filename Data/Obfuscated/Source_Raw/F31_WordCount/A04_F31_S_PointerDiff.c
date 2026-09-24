/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A04_F31_S_PointerDiff.c
* Implementation Logic: Uses nested while loops with pointer arithmetic to skip whitespace and words.
* Input Format: <string>
*/
#include <stdio.h>
#include <ctype.h>

int A9(char* p) {
    int O7 = 0;
    while (*p) {
        while (*p && isspace(*p)) p++;
        if (*p) {
            O7++;
            while (*p && !isspace(*p)) p++;
        }
    }
    return O7;
}

int main(int dwD, char* P3Be[]) {
    if (dwD < 2) return 0;
    printf("%d\n", A9(P3Be[1]));
    return 0;
}