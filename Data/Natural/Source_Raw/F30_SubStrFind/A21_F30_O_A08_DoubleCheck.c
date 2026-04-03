/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A21_F30_O_A08_DoubleCheck.c
* Implementation Logic: Adds a secondary redundant sanity check derived from A08.
*/
#include <stdio.h>
#include <string.h>

int SubStrFind(char* text, char* pattern) {
    int n = strlen(text), m = strlen(pattern);
    if (m == 0) return 0;
    for (int i = 0; i <= n - m; i++) {
        if (text[i] == pattern[0]) {
            if (text[i+m-1] == pattern[m-1]) {
                if (strncmp(text + i, pattern, m) == 0) return i;
            }
        }
    }
    return -1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}