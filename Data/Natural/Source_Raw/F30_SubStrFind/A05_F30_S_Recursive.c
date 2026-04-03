/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A05_F30_S_Recursive.c
* Implementation Logic: Recursive implementation of substring search.
* Input Format: <text> <pattern>
*/
#include <stdio.h>
#include <string.h>

int helper(char* t, char* p, int idx, int m) {
    if (*t == '\0') return -1;
    if (strncmp(t, p, m) == 0) return idx;
    return helper(t + 1, p, idx + 1, m);
}

int SubStrFind(char* text, char* pattern) {
    int m = strlen(pattern);
    if (m == 0) return 0;
    return helper(text, pattern, 0, m);
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}