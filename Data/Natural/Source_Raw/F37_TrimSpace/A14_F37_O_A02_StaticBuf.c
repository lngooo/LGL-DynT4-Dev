/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A14_F37_O_A02_StaticBuf.c
* Logic: Uses static buffer with pointer arithmetic derived from A02.
*/
#include <stdio.h>
#include <string.h>

static char g_buf[4096];
void TrimSpace(char* s) {
    int n = 0;
    char *ptr = s;
    while (*ptr) {
        if (*ptr != ' ' && *ptr != '\t' && *ptr != '\n') {
            *(g_buf + n) = *ptr;
            n++;
        }
        ptr++;
    }
    *(g_buf + n) = '\0';
    strcpy(s, g_buf);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TrimSpace(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}