/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A08_F32_S_LibraryPointer.c
* Implementation Logic: Uses strspn to count consecutive occurrences.
*/
#include <stdio.h>
#include <string.h>

void StrCompress(char* s) {
    while (*s) {
        char charset[2] = {*s, '\0'};
        int run = strspn(s, charset);
        printf("%c%d", *s, run);
        s += run;
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    StrCompress(argv[1]);
    return 0;
}