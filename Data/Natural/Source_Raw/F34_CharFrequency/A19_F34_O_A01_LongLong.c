/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A19_F34_O_A01_LongLong.c
* Logic: Uses 64-bit types for counters and indexing derived from A01.
*/
#include <stdio.h>
#include <string.h>

int CharFrequency(char* s, char c) {
    long long cnt = 0;
    long long len = (long long)strlen(s);
    for (long long k = 0LL; k < len; k++) {
        if (s[k] == c) cnt += 1LL;
    }
    return (int)cnt;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}