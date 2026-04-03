/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A12_F39_O_A05_VarSplit.c
 * Implementation Logic: Variable 'i' is split into i1 and i2 (i = i1 + i2) to obfuscate data flow.
 * Input Format: <string>
 */
#include <stdio.h>

void TitleCase(char* s) {
    int i1 = 0, i2 = 0;
    while (s[i1 + i2]) {
        int idx = i1 + i2;
        int start = (idx == 0 || s[idx - 1] == ' ');
        if (start) {
            if (s[idx] >= 97) s[idx] -= 32;
        } else {
            if (s[idx] >= 65 && s[idx] <= 90) s[idx] += 32;
        }
        i1++;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}