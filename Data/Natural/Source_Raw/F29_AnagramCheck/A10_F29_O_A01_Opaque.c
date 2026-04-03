/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A10_F29_O_A01_Opaque.c
* Implementation Logic: Insertion of Opaque Predicates (if(1)) derived from A01.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int AnagramCheck(char* s1, char* s2) {
    int x = 10, y = 20;
    if (strlen(s1) != strlen(s2)) return 0;
    int counts[256] = {0};
    for (int i = 0; s1[i] != '\0'; i++) {
        if ((x + y) == 30) {
            counts[(unsigned char)s1[i]]++;
            counts[(unsigned char)s2[i]]--;
        } else {
            counts[0] = 999;
        }
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