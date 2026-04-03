/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A04_F30_S_ReverseSearch.c
* Implementation Logic: Checks the last character of pattern first (Boyer-Moore lite).
* Input Format: <text> <pattern>
*/
#include <stdio.h>
#include <string.h>

int SubStrFind(char* text, char* pattern) {
    int n = strlen(text), m = strlen(pattern);
    if (m == 0) return 0;
    for (int i = 0; i <= n - m; i++) {
        if (text[i + m - 1] == pattern[m - 1]) {
            int j = m - 2;
            while (j >= 0 && text[i + j] == pattern[j]) j--;
            if (j == -1) return i;
        }
    }
    return -1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}