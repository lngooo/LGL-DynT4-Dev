/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A06_F34_S_LookupTable.c
* Logic: Full histogram pre-calculation for the string.
*/
#include <stdio.h>

int CharFrequency(char* s, char c) {
    int freq[256] = {0};
    while (*s) {
        freq[(unsigned char)*s]++;
        s++;
    }
    return freq[(unsigned char)c];
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}