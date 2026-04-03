/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A14_F34_O_A03_TernaryRec.c
* Logic: Compact recursion with ternary operators derived from A03.
*/
#include <stdio.h>

int CharFrequency(char* s, char c) {
    return !*s ? 0 : (*s == c ? 1 : 0) + CharFrequency(s + 1, c);
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}