/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A07_F30_S_FirstCharJump.c
* Implementation Logic: Locate the first character using strchr then verify pattern.
* Input Format: <text> <pattern>
*/
#include <stdio.h>
#include <string.h>

int SubStrFind(char* text, char* pattern) {
    char* current = text;
    int m = strlen(pattern);
    if (m == 0) return 0;
    while ((current = strchr(current, pattern[0])) != NULL) {
        if (strncmp(current, pattern, m) == 0) return (int)(current - text);
        current++;
    }
    return -1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}