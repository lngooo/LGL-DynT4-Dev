/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A05_F31_S_Recursive.c
* Implementation Logic: Recursively skips spaces and counts the first encountered word.
* Input Format: <string>
*/
#include <stdio.h>
#include <ctype.h>

int skip_and_count(char* s, int in_word) {
    if (!*s) return 0;
    if (isspace(*s)) return skip_and_count(s + 1, 0);
    if (!in_word) return 1 + skip_and_count(s + 1, 1);
    return skip_and_count(s + 1, 1);
}

int WordCount(char* s) {
    return skip_and_count(s, 0);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}