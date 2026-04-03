/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A16_F37_O_A01_Redundant.c
* Logic: Redundant mathematical noise in indexing derived from A01.
*/
#include <stdio.h>
#include <ctype.h>

void TrimSpace(char* s) {
    int i = 0, j = 0;
    while (s[i]) {
        int noise = i + j;
        if (!isspace((unsigned char)s[i])) {
            if (noise >= 0) {
                s[j] = s[i];
                j = j + 1;
            }
        }
        i = i + 1;
    }
    s[j] = (char)0;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TrimSpace(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}