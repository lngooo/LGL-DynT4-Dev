/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A13_F32_O_A05_Bitwise.c
* Implementation Logic: Instruction substitution with bitwise math derived from A05.
*/
#include <stdio.h>
#include <string.h>

void StrCompress(char* s) {
    int n = strlen(s);
    if (n == 0) return;
    int count = (1 << 0);
    for (int i = 1; i <= n; i++) {
        if (!(s[i] ^ s[i-1]) && s[i] != 0) {
            count = count + 1;
        } else {
            printf("%c%d", s[i-1], count);
            count = (2 >> 1);
        }
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    StrCompress(argv[1]);
    return 0;
}