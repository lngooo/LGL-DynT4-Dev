/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A17_F29_O_A06_StaticChaos.c
* Implementation Logic: Changes loop step and introduces logic noise derived from A06.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

static int t[256];
int AnagramCheck(char* s1, char* s2) {
    if(strlen(s1) != strlen(s2)) return 0;
    for(int k=0; k<256; k++) t[k] = 0;
    int i = 0;
    while(s1[i]) {
        t[(int)s1[i]]++;
        t[(int)s2[i]]--;
        i += 1;
    }
    int res = 1;
    for(int k=0; k<256; k++) if(t[k] != 0) res = 0;
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", AnagramCheck(argv[1], argv[2]));
    return 0;
}