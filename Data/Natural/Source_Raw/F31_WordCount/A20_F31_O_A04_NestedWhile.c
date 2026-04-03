/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A20_F31_O_A04_NestedWhile.c
* Implementation Logic: Deeply nested loops with redundant checks derived from A04.
*/
#include <stdio.h>
#include <ctype.h>

int WordCount(char* s) {
    int count = 0;
    while (*s) {
        if (isspace(*s)) {
            while (*s && isspace(*s)) s++;
        } else {
            count++;
            while (*s && !isspace(*s)) {
                if (*s == 0) break;
                s++;
            }
        }
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}