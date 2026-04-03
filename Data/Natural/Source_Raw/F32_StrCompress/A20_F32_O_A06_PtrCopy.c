/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A20_F32_O_A06_PtrCopy.c
* Implementation Logic: Copies pointer into local stack variable derived from A06.
*/
#include <stdio.h>
#include <string.h>

void StrCompress(char* s) {
    char *t = s;
    while (*t) {
        int n = 0;
        char c = *t;
        char *runner = t;
        while (*runner == c) { n++; runner++; }
        printf("%c%d", c, n);
        t = runner;
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    StrCompress(argv[1]);
    return 0;
}