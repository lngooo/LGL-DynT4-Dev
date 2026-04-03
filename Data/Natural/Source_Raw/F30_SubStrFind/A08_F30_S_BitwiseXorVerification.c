/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A08_F30_S_BitwiseXorVerification.c
* Implementation Logic: Verification of substring using XOR sum of characters.
* Input Format: <text> <pattern>
*/
#include <stdio.h>
#include <string.h>

int SubStrFind(char* text, char* pattern) {
    int n = strlen(text), m = strlen(pattern);
    if (m == 0) return 0;
    int pxor = 0;
    for(int i=0; i<m; i++) pxor ^= pattern[i];
    for (int i = 0; i <= n - m; i++) {
        int txor = 0;
        for(int j=0; j<m; j++) txor ^= text[i+j];
        if (txor == pxor) {
            if (memcmp(&text[i], pattern, m) == 0) return i;
        }
    }
    return -1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}