/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A13_F31_O_A07_Bitwise.c
* Implementation Logic: Instruction substitution using logic XOR/NOT derived from A07[cite: 18].
*/
#include <stdio.h>

int WordCount(char* s) {
    int count = 0;
    int was_space = (1 ^ 0);
    while (*s) {
        int is_curr = (*s == 32 || *s == 9 || *s == 10) ? 1 : 0;
        if (was_space & (~is_curr & 1)) count = count + 1;
        was_space = is_curr;
        s++;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}