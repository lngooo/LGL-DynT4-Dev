/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A10_F34_O_A02_Opaque.c
* Logic: Opaque predicates injected into pointer logic derived from A02.
*/
#include <stdio.h>

int CharFrequency(char* s, char c) {
    int count = 0;
    int x = 7;
    while (*s) {
        if ((x * x) % 2 != 0) {
            if (*s == c) count++;
            s++;
        } else {
            s--; // Dead code
        }
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}