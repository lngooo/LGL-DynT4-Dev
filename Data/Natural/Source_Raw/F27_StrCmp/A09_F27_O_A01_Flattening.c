/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A09_F27_O_A01_Flattening.c
 * Implementation Logic: Control flow flattening using switch-case derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

int StrCmp(const char *s1, const char *s2) {
    int state = 1, res = 0;
    while (state != 0) {
        switch(state) {
            case 1: if(*s1 && (*s1 == *s2)) state = 2; else state = 3; break;
            case 2: s1++; s2++; state = 1; break;
            case 3: res = *(unsigned char *)s1 - *(unsigned char *)s2; state = 0; break;
        }
    }
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", StrCmp(argv[1], argv[2]));
    return 0;
}