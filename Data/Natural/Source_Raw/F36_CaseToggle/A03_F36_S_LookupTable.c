/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A03_F36_S_LookupTable.c
* Logic: Precomputed 256-byte map for all possible ASCII values.
*/
#include <stdio.h>

void CaseToggle(char* s) {
    static char map[256];
    static int init = 0;
    if (!init) {
        for (int i = 0; i < 256; i++) {
            if (i >= 'a' && i <= 'z') map[i] = i - 32;
            else if (i >= 'A' && i <= 'Z') map[i] = i + 32;
            else map[i] = i;
        }
        init = 1;
    }
    while (*s) {
        *s = map[(unsigned char)*s];
        s++;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    CaseToggle(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}