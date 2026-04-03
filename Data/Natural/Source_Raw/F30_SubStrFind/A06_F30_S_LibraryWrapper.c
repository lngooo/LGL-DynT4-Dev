/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A06_F30_S_LibraryWrapper.c
* Implementation Logic: Wrapper around the standard strstr function.
* Input Format: <text> <pattern>
*/
#include <stdio.h>
#include <string.h>

int SubStrFind(char* text, char* pattern) {
    if (strlen(pattern) == 0) return 0;
    char* res = strstr(text, pattern);
    if (res) return (int)(res - text);
    return -1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}