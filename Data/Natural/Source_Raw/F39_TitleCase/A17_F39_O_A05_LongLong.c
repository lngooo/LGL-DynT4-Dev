/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A17_F39_O_A05_LongLong.c
 * Implementation Logic: Uses long long type for indexing to change token width.
 * Input Format: <string>
 */
#include <stdio.h>

void TitleCase(char* s) {
    for (long long i = 0; s[i]; i++) {
        long long prev_idx = i - 1;
        int is_s = (i == 0 || s[prev_idx] == ' ');
        if (is_s) {
            if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        } else {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}