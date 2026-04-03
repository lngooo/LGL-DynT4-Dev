/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A16_F29_O_A07_PointerArithmetic.c
* Implementation Logic: Replaces array indexing with raw pointer arithmetic derived from A07.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int AnagramCheck(char* s1, char* s2) {
    int n = strlen(s1);
    if (n != (int)strlen(s2)) return 0;
    char temp[256]; strcpy(temp, s2);
    for(char* p1 = s1; *p1; p1++) {
        int f = 0;
        for(char* p2 = temp; p2 < temp + n; p2++) {
            if(*p1 == *p2) { *p2 = 0; f = 1; break; }
        }
        if(!f) return 0;
    }
    return 1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", AnagramCheck(argv[1], argv[2]));
    return 0;
}