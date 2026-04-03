/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A07_F37_S_StrpbrkJump.c
* Logic: Identifies segments of non-space characters and copies them forward.
*/
#include <stdio.h>
#include <string.h>

void TrimSpace(char* s) {
    char res[4096] = {0};
    char *p = s;
    char *delims = " \t\n\r\v\f";
    while (*p) {
        int len = strcspn(p, delims);
        if (len > 0) {
            strncat(res, p, len);
            p += len;
        } else {
            p++;
        }
    }
    strcpy(s, res);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TrimSpace(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}