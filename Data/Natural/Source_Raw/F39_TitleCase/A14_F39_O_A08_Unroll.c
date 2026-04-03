/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A14_F39_O_A08_Unroll.c
 * Implementation Logic: A08 with manually unrolled lowercase pass.
 * Input Format: <string>
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void TitleCase(char* s) {
    int len = strlen(s);
    for (int i = 0; i < len; i+=2) {
        s[i] = tolower(s[i]);
        if (i+1 < len) s[i+1] = tolower(s[i+1]);
    }
    if (len > 0) s[0] = toupper(s[0]);
    for (int i = 1; i < len; i++) {
        if (s[i-1] == ' ') s[i] = toupper(s[i]);
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}