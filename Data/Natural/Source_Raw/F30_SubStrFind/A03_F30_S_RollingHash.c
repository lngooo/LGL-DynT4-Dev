/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A03_F30_S_RollingHash.c
* Implementation Logic: A simplified Rabin-Karp approach using additive rolling hash.
* Input Format: <text> <pattern>
*/
#include <stdio.h>
#include <string.h>

int SubStrFind(char* text, char* pattern) {
    int n = strlen(text), m = strlen(pattern);
    if (m == 0) return 0;
    int target_hash = 0, current_hash = 0;
    for (int i = 0; i < m; i++) {
        target_hash += pattern[i];
        current_hash += text[i];
    }
    for (int i = 0; i <= n - m; i++) {
        if (target_hash == current_hash) {
            if (strncmp(&text[i], pattern, m) == 0) return i;
        }
        if (i < n - m) current_hash = current_hash - text[i] + text[i + m];
    }
    return -1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}