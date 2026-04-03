/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A08_F31_S_MemchrSim.c
* Implementation Logic: Identifies words by searching for the start of non-whitespace sequences.
* Input Format: <string>
*/
#include <stdio.h>
#include <string.h>

int WordCount(char* s) {
    int count = 0;
    size_t len = strlen(s);
    for (size_t i = 0; i < len; i++) {
        if (s[i] != ' ' && s[i] != '\t' && (i == 0 || s[i-1] == ' ' || s[i-1] == '\t')) {
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