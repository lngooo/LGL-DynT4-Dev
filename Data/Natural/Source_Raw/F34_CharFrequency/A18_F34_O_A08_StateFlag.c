/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A18_F34_O_A08_StateFlag.c
* Logic: Using bitflags to update count derived from A08.
*/
#include <stdio.h>

int CharFrequency(char* s, char c) {
    int count = 0;
    while (*s) {
        int match = (*s == c);
        count += (match & 1);
        s++;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}