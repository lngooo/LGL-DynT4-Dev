/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A18_F29_O_A05_LongLongWidth.c
* Implementation Logic: Uses long long to expand data width and overflow resistance derived from A05.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int AnagramCheck(char* s1, char* s2) {
    if (strlen(s1) != strlen(s2)) return 0;
    long long x = 0, a = 0;
    for (int i = 0; s1[i]; i++) {
        x ^= (long long)s1[i]; x ^= (long long)s2[i];
        a += (long long)s1[i]; a -= (long long)s2[i];
    }
    return (x == 0LL && a == 0LL);
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", AnagramCheck(argv[1], argv[2]));
    return 0;
}