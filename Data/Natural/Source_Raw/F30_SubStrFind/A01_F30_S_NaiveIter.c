/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A01_F30_S_NaiveIter.c
* Implementation Logic: Standard nested loop brute-force search.
* Input Format: <text> <pattern>
*/
#include <stdio.h>
#include <string.h>

int SubStrFind(char* text, char* pattern) {
    int n = strlen(text);
    int m = strlen(pattern);
    if (m == 0) return 0;
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) break;
        }
        if (j == m) return i;
    }
    return -1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}