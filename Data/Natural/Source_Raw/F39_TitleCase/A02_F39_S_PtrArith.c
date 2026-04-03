/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A02_F39_S_PtrArith.c
 * Implementation Logic: Navigates the string using raw pointers instead of array indices.
 * Input Format: <string>
 */
#include <stdio.h>

void TitleCase(char* s) {
    char* p = s;
    int first = 1;
    while (*p) {
        if (*p == ' ' || *p == '\t' || *p == '\n') {
            first = 1;
        } else {
            if (first) {
                if (*p >= 'a' && *p <= 'z') *p -= 32;
                first = 0;
            } else {
                if (*p >= 'A' && *p <= 'Z') *p += 32;
            }
        }
        p++;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}