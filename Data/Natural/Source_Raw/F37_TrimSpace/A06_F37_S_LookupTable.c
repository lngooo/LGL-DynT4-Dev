/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A06_F37_S_LookupTable.c
* Logic: Uses a precomputed table to identify whitespace characters.
*/
#include <stdio.h>

void TrimSpace(char* s) {
    static int space_map[256] = {0};
    space_map[' '] = space_map['\t'] = space_map['\n'] = space_map['\r'] = space_map['\v'] = space_map['\f'] = 1;
    int j = 0;
    for (int i = 0; s[i]; i++) {
        if (!space_map[(unsigned char)s[i]]) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TrimSpace(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}