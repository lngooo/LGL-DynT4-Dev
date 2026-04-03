/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A18_F30_O_A05_TernaryRec.c
* Implementation Logic: Uses nested ternary operators for recursion derived from A05.
*/
#include <stdio.h>
#include <string.h>

int rec(char* t, char* p, int i, int m) {
    return (*t == '\0') ? -1 : (strncmp(t, p, m) == 0 ? i : rec(t + 1, p, i + 1, m));
}

int SubStrFind(char* text, char* pattern) {
    int m = strlen(pattern);
    return (m == 0) ? 0 : rec(text, pattern, 0, m);
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}