/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A15_F39_O_A01_FakeBranch.c
 * Implementation Logic: A01 logic hidden inside complex but false if-else branches.
 * Input Format: <string>
 */
#include <stdio.h>
#include <ctype.h>

void TitleCase(char* s) {
    int cond = 42;
    if (cond < 10) {
        // Dead code
        s[0] = 'Z';
    } else {
        int w = 1;
        for (int i = 0; s[i]; i++) {
            if (isspace(s[i])) w = 1;
            else {
                s[i] = w ? toupper(s[i]) : tolower(s[i]);
                w = 0;
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