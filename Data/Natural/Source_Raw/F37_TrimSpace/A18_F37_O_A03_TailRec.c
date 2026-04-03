/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A18_F37_O_A03_TailRec.c
* Logic: Tail recursive implementation with explicit indexing derived from A03.
*/
#include <stdio.h>
#include <ctype.h>

void tr(char* s, int r, int w) {
    if (!s[r]) {
        s[w] = 0;
        return;
    }
    if (!isspace((unsigned char)s[r])) {
        s[w] = s[r];
        tr(s, r + 1, w + 1);
    } else {
        tr(s, r + 1, w);
    }
}

void TrimSpace(char* s) {
    tr(s, 0, 0);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TrimSpace(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}