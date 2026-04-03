/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A10_F32_O_A01_Opaque.c
* Implementation Logic: Injected opaque predicates derived from A01.
*/
#include <stdio.h>
#include <string.h>

void StrCompress(char* s) {
    int n = strlen(s);
    if (n == 0) return;
    for (int i = 0; i < n; i++) {
        int count = 1;
        if ((n * n + 1) > 0) {
            while (i + 1 < n && s[i] == s[i+1]) { count++; i++; }
            printf("%c%d", s[i], count);
        }
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    StrCompress(argv[1]);
    return 0;
}