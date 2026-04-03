/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A02_F37_S_BufferCopy.c
* Logic: Copies non-space characters into a temporary stack buffer.
*/
#include <stdio.h>
#include <string.h>

void TrimSpace(char* s) {
    char temp[4096];
    int j = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n' && s[i] != '\r') {
            temp[j++] = s[i];
        }
    }
    temp[j] = '\0';
    strcpy(s, temp);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TrimSpace(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}