/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A05_F26_S_Recursive_Tail.c
 * Implementation Logic: Tail-recursive length (Seed 4).
 */
#include <stdio.h>

int length_helper(const char *s, int acc) {
    return (*s == '\0') ? acc : length_helper(s + 1, acc + 1);
}

int StrLen(const char *s) {
    return length_helper(s, 0);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}