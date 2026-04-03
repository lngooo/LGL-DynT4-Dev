/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A13_F28_O_A06_PointerObf.c
 * Implementation Logic: PointerObf derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int IsPalindrome(char *str) {
    char *head = str;
    char *tail = str;
    while (*tail) tail++;
    tail = tail - 1;
    while (head < tail) {
        if (*head - *tail != 0) return 0;
        head++;
        tail--;
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