/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A18_F32_O_A03_TailRec.c
* Implementation Logic: Tail-recursive variant with index derived from A03.
*/
#include <stdio.h>
#include <string.h>

void tr(char* s, int i) {
    if (!s[i]) return;
    int k = 1;
    while (s[i+k] == s[i]) k++;
    printf("%c%d", s[i], k);
    tr(s, i + k);
}

void StrCompress(char* s) {
    tr(s, 0);
    printf("\n");
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    StrCompress(argv[1]);
    return 0;
}