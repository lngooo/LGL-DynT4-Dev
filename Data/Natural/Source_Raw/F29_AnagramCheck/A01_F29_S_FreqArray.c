/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A01_F29_S_FreqArray.c
* Implementation Logic: Uses a fixed-size frequency array (256 ASCII) to count characters.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int AnagramCheck(char* s1, char* s2) {
    if (strlen(s1) != strlen(s2)) return 0;
    int counts[256] = {0};
    for (int i = 0; s1[i] != '\0'; i++) {
        counts[(unsigned char)s1[i]]++;
        counts[(unsigned char)s2[i]]--;
    }
    for (int i = 0; i < 256; i++) {
        if (counts[i] != 0) return 0;
    }
    return 1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", AnagramCheck(argv[1], argv[2]));
    return 0;
}