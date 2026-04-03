/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A01_F39_S_StateMachine.c
 * Implementation Logic: Uses a boolean flag to track word boundaries and transform characters.
 * Input Format: <string>
 */
#include <stdio.h>
#include <ctype.h>

void TitleCase(char* s) {
    int newWord = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isspace(s[i])) {
            newWord = 1;
        } else if (newWord) {
            s[i] = toupper(s[i]);
            newWord = 0;
        } else {
            s[i] = tolower(s[i]);
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}