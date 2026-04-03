/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A02_F34_S_PointerWalk.c
* Logic: Pointer incrementation and dereferencing.
*/
#include <stdio.h>

int CharFrequency(char* s, char c) {
    int count = 0;
    while (*s) {
        if (*s == c) count++;
        s++;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}