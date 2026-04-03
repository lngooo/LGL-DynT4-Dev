/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A03_F37_S_Recursive.c
* Logic: Recursive character shifting.
*/
#include <stdio.h>
#include <ctype.h>

void solve(char* src, char* dst) {
    if (!*src) {
        *dst = '\0';
        return;
    }
    if (!isspace((unsigned char)*src)) {
        *dst = *src;
        solve(src + 1, dst + 1);
    } else {
        solve(src + 1, dst);
    }
}

void TrimSpace(char* s) {
    solve(s, s);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TrimSpace(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}