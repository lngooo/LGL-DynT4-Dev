/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A01_F37_S_TwoPointers.c
* Logic: Standard in-place removal using a read and write pointer.
*/
#include <stdio.h>
#include <ctype.h>

void TrimSpace(char* s) {
    int i = 0, j = 0;
    while (s[i]) {
        if (!isspace((unsigned char)s[i])) {
            s[j++] = s[i];
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