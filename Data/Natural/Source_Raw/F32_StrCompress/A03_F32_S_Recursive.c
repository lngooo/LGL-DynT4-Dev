/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A03_F32_S_Recursive.c
* Implementation Logic: Recursive compression by finding the first run and recursing on the tail.
*/
#include <stdio.h>
#include <string.h>

void compress_rec(char* s) {
    if (!s || !*s) return;
    int count = 1;
    while (s[count] && s[count] == s[0]) count++;
    printf("%c%d", s[0], count);
    compress_rec(s + count);
}

void StrCompress(char* s) {
    compress_rec(s);
    printf("\n");
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    StrCompress(argv[1]);
    return 0;
}