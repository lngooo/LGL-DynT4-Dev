/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A05_F34_S_XorZero.c
* Logic: Uses XOR to identify matches (res == 0 means match).
*/
#include <stdio.h>

int CharFrequency(char* s, char c) {
    int count = 0;
    for (; *s; s++) {
        if (!(*s ^ c)) count++;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}