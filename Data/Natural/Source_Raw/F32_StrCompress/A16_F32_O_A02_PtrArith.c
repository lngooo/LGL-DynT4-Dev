/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A16_F32_O_A02_PtrArith.c
* Implementation Logic: Raw pointer arithmetic and dereferencing derived from A02.
*/
#include <stdio.h>
#include <string.h>

void StrCompress(char* s) {
    char *curr = s;
    while (*curr) {
        char *scan = curr;
        while (*(scan + 1) == *curr) scan++;
        printf("%c%d", *curr, (int)(scan - curr + 1));
        curr = scan + 1;
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    StrCompress(argv[1]);
    return 0;
}