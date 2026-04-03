/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A05_F37_S_PointerArithmetic.c
* Logic: Direct pointer manipulation and dereferencing.
*/
#include <stdio.h>

void TrimSpace(char* s) {
    char *rd = s, *wr = s;
    while (*rd) {
        if (*rd != 32 && *rd != 9 && *rd != 10 && *rd != 13) {
            *wr = *rd;
            wr++;
        }
        rd++;
    }
    *wr = '\0';
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TrimSpace(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}