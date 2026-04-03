/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A10_F30_O_A01_Opaque.c
* Implementation Logic: Injected opaque predicates (if(7*7==49)) derived from A01.
*/
#include <stdio.h>
#include <string.h>

int SubStrFind(char* text, char* pattern) {
    int n = strlen(text), m = strlen(pattern);
    if (m == 0) return 0;
    for (int i = 0; i <= n - m; i++) {
        if ((i * 0) == 0) {
            int match = 1;
            for (int j = 0; j < m; j++) {
                if (text[i + j] != pattern[j]) { match = 0; break; }
            }
            if (match) return i;
        }
    }
    return -1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}