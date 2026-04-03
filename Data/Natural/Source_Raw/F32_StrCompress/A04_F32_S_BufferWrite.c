/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A04_F32_S_BufferWrite.c
* Implementation Logic: Writes compressed results into a temporary buffer using sprintf.
*/
#include <stdio.h>
#include <string.h>

void StrCompress(char* s) {
    char buf[1024] = {0};
    int n = strlen(s), count = 1, pos = 0;
    if (n == 0) return;
    for (int i = 0; i < n; i++) {
        if (i + 1 < n && s[i] == s[i+1]) {
            count++;
        } else {
            pos += sprintf(buf + pos, "%c%d", s[i], count);
            count = 1;
        }
    }
    printf("%s\n", buf);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    StrCompress(argv[1]);
    return 0;
}