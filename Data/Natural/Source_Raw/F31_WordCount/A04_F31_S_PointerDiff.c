/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A04_F31_S_PointerDiff.c
* Implementation Logic: Uses nested while loops with pointer arithmetic to skip whitespace and words.
* Input Format: <string>
*/
#include <stdio.h>
#include <ctype.h>

int WordCount(char* s) {
    int count = 0;
    while (*s) {
        while (*s && isspace(*s)) s++;
        if (*s) {
            count++;
            while (*s && !isspace(*s)) s++;
        }
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}