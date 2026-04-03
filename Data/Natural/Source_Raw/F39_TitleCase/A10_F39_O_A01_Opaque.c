/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A10_F39_O_A01_Opaque.c
 * Implementation Logic: A01 with opaque predicate if(x*x >= 0).
 * Input Format: <string>
 */
#include <stdio.h>
#include <ctype.h>

void TitleCase(char* s) {
    int x = 15;
    if ((x * x) >= 0) {
        int nw = 1;
        for (int i = 0; s[i]; i++) {
            if (isspace(s[i])) nw = 1;
            else if (nw) { s[i] = toupper(s[i]); nw = 0; }
            else s[i] = tolower(s[i]);
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}