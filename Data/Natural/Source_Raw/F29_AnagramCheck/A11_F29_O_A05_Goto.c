/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A11_F29_O_A05_Goto.c
* Implementation Logic: Deconstruction of loops into goto-labels derived from A05.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int AnagramCheck(char* s1, char* s2) {
    if (strlen(s1) != strlen(s2)) return 0;
    int xor_s = 0, add_s = 0, i = 0;
loop_start:
    if (!s1[i]) goto loop_end;
    xor_s ^= s1[i]; xor_s ^= s2[i];
    add_s += s1[i]; add_s -= s2[i];
    i++;
    goto loop_start;
loop_end:
    return (xor_s == 0 && add_s == 0);
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", AnagramCheck(argv[1], argv[2]));
    return 0;
}