/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A07_F31_S_FlagToggle.c
* Implementation Logic: Bitwise flag toggle to track transitions between space and non-space ASCII ranges.
* Input Format: <string>
*/
#include <stdio.h>

int WordCount(char* s) {
    int count = 0;
    int was_space = 1;
    for (; *s; s++) {
        int is_curr_space = (*s == ' ' || *s == '\t' || *s == '\n');
        if (was_space && !is_curr_space) count++;
        was_space = is_curr_space;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}