/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A12_F30_O_A01_VarSplit.c
* Implementation Logic: Splitting index i into (ia + ib) derived from A01.
*/
#include <stdio.h>
#include <string.h>

int SubStrFind(char* text, char* pattern) {
    int n = strlen(text), m = strlen(pattern);
    if (m == 0) return 0;
    int ia = 0, ib = 0;
    while ((ia + ib) <= n - m) {
        int match = 1;
        for (int j = 0; j < m; j++) {
            if (text[ia + ib + j] != pattern[j]) { match = 0; break; }
        }
        if (match) return (ia + ib);
        if (ia < 1000) ia++; else ib++;
    }
    return -1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}