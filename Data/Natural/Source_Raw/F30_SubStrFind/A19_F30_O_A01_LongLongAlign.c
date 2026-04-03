/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A19_F30_O_A01_LongLongAlign.c
* Implementation Logic: Casts lengths to long long to alter token sequence derived from A01.
*/
#include <stdio.h>
#include <string.h>

int SubStrFind(char* text, char* pattern) {
    long long n = (long long)strlen(text);
    long long m = (long long)strlen(pattern);
    if (m == 0LL) return 0;
    for (long long i = 0; i <= n - m; i++) {
        if (memcmp(text + i, pattern, (size_t)m) == 0) return (int)i;
    }
    return -1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", SubStrFind(argv[1], argv[2]));
    return 0;
}