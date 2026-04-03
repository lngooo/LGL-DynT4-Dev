/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A08_F37_S_BitMaskValidation.c
* Logic: Validates characters against whitespace ASCII values using a bitmask.
*/
#include <stdio.h>

void TrimSpace(char* s) {
    int j = 0;
    for (int i = 0; s[i]; i++) {
        unsigned char c = s[i];
        // Check if ASCII is space(32) or control range (9-13)
        int is_white = (c == 32) || (c >= 9 && c <= 13);
        if (!is_white) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TrimSpace(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}