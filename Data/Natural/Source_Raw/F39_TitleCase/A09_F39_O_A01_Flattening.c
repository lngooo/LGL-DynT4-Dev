/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A09_F39_O_A01_Flattening.c
 * Implementation Logic: Control Flow Flattening of A01 using switch-case state variable.
 * Input Format: <string>
 */
#include <stdio.h>
#include <ctype.h>

void TitleCase(char* s) {
    int state = 1, i = 0, nw = 1;
    while (state != 0) {
        switch (state) {
            case 1: if (s[i] == '\0') state = 0; else state = 2; break;
            case 2: if (isspace(s[i])) { nw = 1; state = 5; } else state = 3; break;
            case 3: if (nw) { s[i] = toupper(s[i]); nw = 0; } else s[i] = tolower(s[i]); state = 5; break;
            case 5: i++; state = 1; break;
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}