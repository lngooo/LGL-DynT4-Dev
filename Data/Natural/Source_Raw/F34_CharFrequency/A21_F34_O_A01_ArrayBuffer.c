/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A21_F34_O_A01_ArrayBuffer.c
* Logic: Copies target char into a buffer for comparison derived from A01.
*/
#include <stdio.h>

int CharFrequency(char* s, char c) {
    char target[1] = {c};
    int n = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == target[0]) n++;
    }
    return n;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}