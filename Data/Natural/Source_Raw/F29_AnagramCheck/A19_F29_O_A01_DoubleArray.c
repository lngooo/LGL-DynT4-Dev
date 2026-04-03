/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A19_F29_O_A01_DoubleArray.c
* Implementation Logic: Splits one frequency array into two separate arrays for comparison derived from A01.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int AnagramCheck(char* s1, char* s2) {
    if (strlen(s1) != strlen(s2)) return 0;
    int c1[256] = {0}, c2[256] = {0};
    for (int i = 0; s1[i]; i++) { c1[(unsigned char)s1[i]]++; c2[(unsigned char)s2[i]]++; }
    for (int i = 0; i < 256; i++) if (c1[i] != c2[i]) return 0;
    return 1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", AnagramCheck(argv[1], argv[2]));
    return 0;
}