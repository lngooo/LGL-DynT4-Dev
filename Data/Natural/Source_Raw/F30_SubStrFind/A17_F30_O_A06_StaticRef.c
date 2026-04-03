/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A17_F30_O_A06_StaticRef.c
* Implementation Logic: Introduces static variables to track calls derived from A06.
*/
#include <stdio.h>
#include <string.h>

static int calls = 0;
int SubStrFind(char* text, char* pattern) {
    calls++;
    if (strlen(pattern) == 0) return 0;
    char* found = strstr(text, pattern);
    return found ? (int)(found - text) : -1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}