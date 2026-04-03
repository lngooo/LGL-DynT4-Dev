/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A04_F37_S_MemmoveLogic.c
* Logic: Uses memmove to shift the remaining string whenever a space is found.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void TrimSpace(char* s) {
    int i = 0;
    int len = strlen(s);
    while (s[i]) {
        if (isspace((unsigned char)s[i])) {
            memmove(&s[i], &s[i+1], len - i);
            len--;
        } else {
            i++;
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TrimSpace(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}