/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A17_F32_O_A04_StaticBuf.c
* Implementation Logic: Uses static storage for buffer derived from A04.
*/
#include <stdio.h>
#include <string.h>

static char g_buf[2048];
void StrCompress(char* s) {
    int n = (int)strlen(s), c = 1, p = 0;
    if (n == 0) return;
    for (int i = 0; i < n; i++) {
        if (i + 1 < n && s[i] == s[i+1]) c++;
        else {
            p += sprintf(g_buf + p, "%c%d", s[i], c);
            c = 1;
        }
    }
    g_buf[p] = 0;
    puts(g_buf);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    StrCompress(argv[1]);
    return 0;
}