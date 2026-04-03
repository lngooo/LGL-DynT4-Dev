/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A07_F32_S_Sentinel.c
* Implementation Logic: Uses index-based matching with a terminal condition check.
*/
#include <stdio.h>
#include <string.h>

void StrCompress(char* s) {
    int i = 0, j = 0;
    while (s[i]) {
        for (j = i; s[j] == s[i]; j++);
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