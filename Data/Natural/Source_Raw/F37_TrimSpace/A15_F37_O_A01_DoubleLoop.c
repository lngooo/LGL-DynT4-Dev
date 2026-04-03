/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A15_F37_O_A01_DoubleLoop.c
* Logic: Nested loops for searching next valid character derived from A01.
*/
#include <stdio.h>
#include <ctype.h>

void TrimSpace(char* s) {
    int write = 0;
    for (int i = 0; s[i]; ) {
        if (!isspace((unsigned char)s[i])) {
            s[write++] = s[i++];
        } else {
            int skip = i;
            while (s[skip] && isspace((unsigned char)s[skip])) skip++;
            i = skip;
        }
    }
    s[write] = '\0';
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TrimSpace(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}