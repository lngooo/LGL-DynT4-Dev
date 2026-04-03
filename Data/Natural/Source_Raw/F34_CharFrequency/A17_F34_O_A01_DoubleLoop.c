/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A17_F34_O_A01_DoubleLoop.c
* Logic: Nested loop structure with fake inner iterations derived from A01.
*/
#include <stdio.h>

int CharFrequency(char* s, char c) {
    int count = 0;
    for (int i = 0; s[i]; i++) {
        for (int j = 0; j < 1; j++) {
            if (s[i] == c) count++;
        }
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}