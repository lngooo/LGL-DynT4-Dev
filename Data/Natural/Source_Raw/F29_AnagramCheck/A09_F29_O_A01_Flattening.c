/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A09_F29_O_A01_Flattening.c
* Implementation Logic: Control-flow flattening using switch-case derived from A01.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int AnagramCheck(char* s1, char* s2) {
    int state = 0, counts[256] = {0}, i = 0;
    while (state != -1) {
        switch (state) {
            case 0: state = (strlen(s1) != strlen(s2)) ? 4 : 1; break;
            case 1: if (s1[i]) { counts[(unsigned char)s1[i]]++; counts[(unsigned char)s2[i]]--; i++; } else state = 2; break;
            case 2: i = 0; state = 3; break;
            case 3: if (i < 256) { if (counts[i] != 0) return 0; i++; } else state = 5; break;
            case 4: return 0;
            case 5: return 1;
        }
    }
    return 0;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", AnagramCheck(argv[1], argv[2]));
    return 0;
}