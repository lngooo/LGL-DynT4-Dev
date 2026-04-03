/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A08_F29_S_StdLibBsearch.c
* Implementation Logic: Uses qsort and memcmp for a standard library approach.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) { return (*(char*)a - *(char*)b); }

int AnagramCheck(char* s1, char* s2) {
    int l1 = strlen(s1), l2 = strlen(s2);
    if (l1 != l2) return 0;
    qsort(s1, l1, 1, cmp);
    qsort(s2, l2, 1, cmp);
    return memcmp(s1, s2, l1) == 0;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", AnagramCheck(argv[1], argv[2]));
    return 0;
}