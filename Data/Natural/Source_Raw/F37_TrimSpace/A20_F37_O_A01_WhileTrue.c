/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A20_F37_O_A01_WhileTrue.c
* Logic: while(1) loop with manual break and pointer casting derived from A01.
*/
#include <stdio.h>
#include <ctype.h>

void TrimSpace(char* s) {
    int i = 0, j = 0;
    while (1) {
        if (s[i] == '\0') break;
        unsigned char c = (unsigned char)s[i];
        if (!isspace(c)) {
            s[j] = (char)c;
            j++;
        }
        i++;
    }
    s[j] = '\0';
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TrimSpace(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}