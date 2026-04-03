/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A03_F39_S_Recursive.c
 * Implementation Logic: Processes the string recursively, passing the "isNewWord" state.
 * Input Format: <string>
 */
#include <stdio.h>
#include <ctype.h>

void process(char* s, int isFirst) {
    if (!*s) return;
    if (isspace(*s)) {
        process(s + 1, 1);
    } else {
        *s = isFirst ? toupper(*s) : tolower(*s);
        process(s + 1, 0);
    }
}

void TitleCase(char* s) {
    process(s, 1);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}