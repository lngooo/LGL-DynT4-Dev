/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A02_F30_S_PointerArithmetic.c
* Implementation Logic: Uses pointer subtraction and strncmp for pattern matching.
* Input Format: <text> <pattern>
*/
#include <stdio.h>
#include <string.h>

int SubStrFind(char* text, char* pattern) {
    char* p = text;
    int m = strlen(pattern);
    if (m == 0) return 0;
    while (*p) {
        if (strncmp(p, pattern, m) == 0) return (int)(p - text);
        p++;
    }
    return -1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}