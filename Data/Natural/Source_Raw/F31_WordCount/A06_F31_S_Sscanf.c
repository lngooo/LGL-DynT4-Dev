/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A06_F31_S_Sscanf.c
* Implementation Logic: Uses sscanf with %n to advance the pointer through words.
* Input Format: <string>
*/
#include <stdio.h>

int WordCount(char* s) {
    int count = 0, offset;
    char word[256];
    while (sscanf(s, "%255s%n", word, &offset) == 1) {
        count++;
        s += offset;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}