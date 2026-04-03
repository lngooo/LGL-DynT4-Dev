/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A20_F39_O_A03_TailRecursive.c
 * Implementation Logic: A03 modified to simulate tail-call optimization manually.
 * Input Format: <string>
 */
#include <stdio.h>
#include <ctype.h>

void TitleCase(char* s) {
tail_recurse:
    if (!*s) return;
    static int isFirst = 1;
    if (isspace(*s)) {
        isFirst = 1;
    } else {
        *s = isFirst ? toupper(*s) : tolower(*s);
        isFirst = 0;
    }
    s++;
    goto tail_recurse;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}