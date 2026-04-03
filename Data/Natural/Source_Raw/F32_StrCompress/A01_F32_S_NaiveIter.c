/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A01_F32_S_NaiveIter.c
* Implementation Logic: Iterative scan using a counter for consecutive characters.
* Input Format: <string>
*/
#include <stdio.h>
#include <string.h>

void StrCompress(char* s) {
    int n = strlen(s);
    if (n == 0) return;
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i + 1 < n && s[i] == s[i + 1]) {
            count++;
            i++;
        }
        printf("%c%d", s[i], count);
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    StrCompress(argv[1]);
    return 0;
}