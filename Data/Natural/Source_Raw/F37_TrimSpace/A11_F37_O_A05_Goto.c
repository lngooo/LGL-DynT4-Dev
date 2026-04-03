/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A11_F37_O_A05_Goto.c
* Logic: Goto-based reconstruction of pointer logic derived from A05.
*/
#include <stdio.h>

void TrimSpace(char* s) {
    char *rd = s, *wr = s;
loop:
    if (!*rd) goto end;
    if (*rd == 32 || (*rd >= 9 && *rd <= 13)) goto skip;
    *wr = *rd;
    wr++;
skip:
    rd++;
    goto loop;
end:
    *wr = '\0';
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TrimSpace(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}