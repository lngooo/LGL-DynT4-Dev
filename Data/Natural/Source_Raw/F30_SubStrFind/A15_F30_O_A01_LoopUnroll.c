/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A15_F30_O_A01_LoopUnroll.c
* Implementation Logic: Partial loop unrolling of the inner comparison derived from A01.
*/
#include <stdio.h>
#include <string.h>

int SubStrFind(char* text, char* pattern) {
    int n = strlen(text), m = strlen(pattern);
    if (m == 0) return 0;
    for (int i = 0; i <= n - m; i++) {
        int match = 1;
        int j = 0;
        while (j < m - 1) {
            if (text[i+j] != pattern[j] || text[i+j+1] != pattern[j+1]) { match = 0; break; }
            j += 2;
        }
        if (match && j == m - 1) if (text[i+j] != pattern[j]) match = 0;
        if (match) return i;
    }
    return -1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}