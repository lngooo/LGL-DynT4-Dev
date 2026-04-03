/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A19_F39_O_A01_NestedState.c
 * Implementation Logic: Logic of A01 nested inside multiple for-loops to alter CFG depth.
 * Input Format: <string>
 */
#include <stdio.h>
#include <ctype.h>

void TitleCase(char* s) {
    for (int outer = 0; outer < 1; outer++) {
        int w = 1;
        for (int i = 0; s[i]; i++) {
            for (int inner = 0; inner < 1; inner++) {
                if (isspace(s[i])) w = 1;
                else if (w) { s[i] = toupper(s[i]); w = 0; }
                else s[i] = tolower(s[i]);
            }
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}