/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A21_F32_O_A01_LongLong.c
* Implementation Logic: Uses long long for all counters derived from A01.
*/
#include <stdio.h>
#include <string.h>

void StrCompress(char* s) {
    long long n = (long long)strlen(s);
    for (long long i = 0; i < n; i++) {
        long long c = 1;
        while (i + 1 < n && s[i] == s[i + 1]) {
            c++;
            i++;
        }
        printf("%c%lld", s[i], c);
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    StrCompress(argv[1]);
    return 0;
}