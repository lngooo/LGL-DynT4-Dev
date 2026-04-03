/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A02_F32_S_TwoPointers.c
* Implementation Logic: Classic two-pointer approach (anchor and explorer).
* Input Format: <string>
*/
#include <stdio.h>
#include <string.h>

void StrCompress(char* s) {
    char *p = s, *q = s;
    while (*p) {
        q = p;
        while (*q == *p) q++;
        printf("%c%ld", *p, (long)(q - p));
        p = q;
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    StrCompress(argv[1]);
    return 0;
}