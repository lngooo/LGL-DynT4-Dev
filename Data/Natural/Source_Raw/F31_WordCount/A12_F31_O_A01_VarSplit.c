/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A12_F31_O_A01_VarSplit.c
* Implementation Logic: Variable splitting (count split into c1 and c2) derived from A01[cite: 17].
*/
#include <stdio.h>
#include <ctype.h>

int WordCount(char* s) {
    int c1 = 0, c2 = 0, state = 0;
    while (*s) {
        if (isspace(*s)) state = 0;
        else if (state == 0) {
            state = 1;
            if (c1 < 100) c1++; else c2++;
        }
        s++;
    }
    return c1 + c2;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}