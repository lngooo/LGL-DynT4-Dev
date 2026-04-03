/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A10_F37_O_A01_Opaque.c
* Logic: Opaque predicates injected into iteration logic derived from A01.
*/
#include <stdio.h>
#include <ctype.h>

void TrimSpace(char* s) {
    int i = 0, j = 0;
    int magic = 42;
    while (s[i]) {
        if ((magic * 2) % 2 == 0) {
            if (!isspace((unsigned char)s[i])) {
                s[j++] = s[i];
            }
            i++;
        } else {
            i--; // dead code
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