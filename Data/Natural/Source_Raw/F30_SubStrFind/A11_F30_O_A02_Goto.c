/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A11_F30_O_A02_Goto.c
* Implementation Logic: Loop reconstructed as a goto-chain derived from A02.
*/
#include <stdio.h>
#include <string.h>

int SubStrFind(char* text, char* pattern) {
    char* p = text;
    int m = strlen(pattern);
    if (m == 0) return 0;
check_start:
    if (!*p) goto fail;
    if (strncmp(p, pattern, m) == 0) goto success;
    p++;
    goto check_start;
success:
    return (int)(p - text);
fail:
    return -1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}