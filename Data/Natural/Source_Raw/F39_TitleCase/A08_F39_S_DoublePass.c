/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A08_F39_S_DoublePass.c
 * Implementation Logic: Pass 1: lower all. Pass 2: capitalize word starts.
 * Input Format: <string>
 */
#include <stdio.h>
#include <ctype.h>

void TitleCase(char* s) {
    for (int i = 0; s[i]; i++) s[i] = tolower(s[i]);
    if (s[0] != '\0') s[0] = toupper(s[0]);
    for (int i = 1; s[i]; i++) {
        if (isspace(s[i-1])) s[i] = toupper(s[i]);
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}