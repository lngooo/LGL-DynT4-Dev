/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A15_F34_O_A02_Redundant.c
* Logic: Adding mathematical noise to pointer logic derived from A02.
*/
#include <stdio.h>

int CharFrequency(char* s, char c) {
    int count = 0;
    while (*s) {
        int dummy = (*s * 2) / 2;
        if (dummy == (int)c && *s == c) {
            count++;
        }
        s++;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}