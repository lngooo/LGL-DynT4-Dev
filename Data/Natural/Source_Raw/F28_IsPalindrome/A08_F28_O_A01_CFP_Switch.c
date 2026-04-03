/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A08_F28_O_A01_CFP_Switch.c
 * Implementation Logic: Switch derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int IsPalindrome(char *str) {
    int len = 0; while (str[len]) len++;
    int i = 0, j = len - 1, state = 0;
    while (state != 3) {
        switch(state) {
            case 0: state = (i < j) ? 1 : 2; break;
            case 1: if (str[i] != str[j]) return 0; i++; j--; state = 0; break;
            case 2: return 1;
        }
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