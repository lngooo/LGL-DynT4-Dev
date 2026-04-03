/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A13_F34_O_A05_BitwiseSub.c
* Logic: Instruction substitution using bitwise NOT and AND derived from A05.
*/
#include <stdio.h>

int CharFrequency(char* s, char c) {
    int count = 0;
    while (*s) {
        // Equivalent to *s == c
        int diff = *s ^ c;
        if (!diff) {
            count = -~count; // count++
        }
        s = (char*)((size_t)s + 1);
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}