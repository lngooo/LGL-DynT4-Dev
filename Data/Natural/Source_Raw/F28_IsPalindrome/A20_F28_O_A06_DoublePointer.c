/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A20_F28_O_A06_DoublePointer.c
 * Implementation Logic: DoublePointer derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int IsPalindrome(char *str) {
    char **h = &str;
    int len = 0; while ((*h)[len]) len++;
    char *e = *h + len - 1;
    char *s = *h;
    while(s < e) {
        if(*s != *e) return 0;
        s++; e--;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    char *str = argv[1];
    int result = IsPalindrome(str);
    printf("%d\n", result);
    return 0;
}