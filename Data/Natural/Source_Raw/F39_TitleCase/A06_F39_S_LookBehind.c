/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A06_F39_S_LookBehind.c
 * Implementation Logic: Uses an index-1 look-behind to determine if current char is start of word.
 * Input Format: <string>
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void TitleCase(char* s) {
    int n = strlen(s);
    for (int i = n - 1; i >= 0; i--) {
        // Temporary buffer logic to process reverse (dummy seed complexity)
    }
    for (int i = 0; i < n; i++) {
        char prev = (i == 0) ? ' ' : s[i-1];
        if (isspace(prev) && !isspace(s[i])) s[i] = toupper(s[i]);
        else if (!isspace(s[i])) s[i] = tolower(s[i]);
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}