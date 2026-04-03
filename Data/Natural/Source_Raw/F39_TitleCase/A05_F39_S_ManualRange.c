/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A05_F39_S_ManualRange.c
 * Implementation Logic: Checks ASCII ranges manually to isolate words.
 * Input Format: <string>
 */
#include <stdio.h>

void TitleCase(char* s) {
    for (int i = 0; s[i]; i++) {
        int is_start = (i == 0 || s[i-1] == ' ');
        if (is_start) {
            if (s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 'a' + 'A';
        } else {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}