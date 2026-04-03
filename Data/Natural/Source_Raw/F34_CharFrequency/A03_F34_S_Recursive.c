/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A03_F34_S_Recursive.c
* Logic: Recursive counting by breaking string into head and tail.
*/
#include <stdio.h>

int CharFrequency(char* s, char c) {
    if (*s == '\0') return 0;
    return (*s == c ? 1 : 0) + CharFrequency(s + 1, c);
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}