/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A15_F32_O_A07_WhileTrue.c
* Implementation Logic: Infinite loop with manual break derived from A07.
*/
#include <stdio.h>
#include <string.h>

void StrCompress(char* s) {
    int i = 0;
    while (1) {
        if (!s[i]) break;
        int j = i;
        while (s[j] && s[j] == s[i]) j++;
        printf("%c%d", s[i], j - i);
        i = j;
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    StrCompress(argv[1]);
    return 0;
}