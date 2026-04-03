/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A05_F29_S_BitwiseXorSum.c
* Implementation Logic: Combines XOR sum and additive sum to reduce collision probability.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int AnagramCheck(char* s1, char* s2) {
    if (strlen(s1) != strlen(s2)) return 0;
    int xor_s = 0, add_s = 0;
    for (int i = 0; s1[i]; i++) {
        xor_s ^= s1[i]; xor_s ^= s2[i];
        add_s += s1[i]; add_s -= s2[i];
    }
    return (xor_s == 0 && add_s == 0);
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", AnagramCheck(argv[1], argv[2]));
    return 0;
}