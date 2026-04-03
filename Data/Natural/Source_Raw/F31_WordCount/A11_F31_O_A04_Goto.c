/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A11_F31_O_A04_Goto.c
* Implementation Logic: Goto-based loop reconstruction derived from A04.
*/
#include <stdio.h>
#include <ctype.h>

int WordCount(char* s) {
    int count = 0;
start:
    if (!*s) goto end;
skip_ws:
    if (*s && isspace(*s)) { s++; goto skip_ws; }
    if (!*s) goto end;
    count++;
skip_word:
    if (*s && !isspace(*s)) { s++; goto skip_word; }
    goto start;
end:
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}