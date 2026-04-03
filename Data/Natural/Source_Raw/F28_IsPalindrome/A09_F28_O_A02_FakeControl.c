/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A09_F28_O_A02_FakeControl.c
 * Implementation Logic: FakeControl derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int IsPalindrome(char *str) {
    int len = 0; while (str[len]) len++;
    if (len <= 1) return 1;
    if (1) {
        if (str[0] != str[len-1]) return 0;
    } else {
        int x = 100;
    }
    char sub[100];
    int i = 1;
    while(i < len - 1) { sub[i-1] = str[i]; i++; }
    sub[i-1] = '\0';
    return IsPalindrome(sub);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    char *str = argv[1];
    int result = IsPalindrome(str);
    printf("%d\n", result);
    return 0;
}