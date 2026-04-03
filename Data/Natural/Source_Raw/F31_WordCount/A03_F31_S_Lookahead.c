/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A03_F31_S_Lookahead.c
* Implementation Logic: Identifies the end of a word by checking if current is non-space and next is space/null.
* Input Format: <string>
*/
#include <stdio.h>
#include <ctype.h>

int WordCount(char* s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (!isspace(s[i]) && (isspace(s[i+1]) || s[i+1] == '\0')) {
            count++;
        }
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}