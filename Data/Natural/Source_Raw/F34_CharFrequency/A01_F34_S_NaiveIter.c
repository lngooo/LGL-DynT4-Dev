/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A01_F34_S_NaiveIter.c
* Logic: Standard iterative loop with an equality check.
* Input: <string> <char>
*/
#include <stdio.h>

int CharFrequency(char* s, char c) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) count++;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}