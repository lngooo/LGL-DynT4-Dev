/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A20_F27_O_A03_TailRec.c
 * Implementation Logic: Tail-recursive wrapper for recursion in A03.
 */
#include <stdio.h>
#include <stdlib.h>

int rec_helper(const char *s1, const char *s2) {
    return (*s1 == '\0' || *s1 != *s2) ? (*(unsigned char*)s1 - *(unsigned char*)s2) : rec_helper(s1+1, s2+1);
}

int StrCmp(const char *s1, const char *s2) {
    return rec_helper(s1, s2);
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", StrCmp(argv[1], argv[2]));
    return 0;
}