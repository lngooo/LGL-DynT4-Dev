/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A04_F29_S_RecursiveCompare.c
* Implementation Logic: Recursive approach by finding and removing first char of s1 from s2.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int check(char* s1, char* s2) {
    if (*s1 == '\0' && *s2 == '\0') return 1;
    if (strlen(s1) != strlen(s2)) return 0;
    char* p = strchr(s2, *s1);
    if (!p) return 0;
    *p = s2[strlen(s2)-1];
    s2[strlen(s2)-1] = '\0';
    return check(s1 + 1, s2);
}

int AnagramCheck(char* s1, char* s2) {
    char t2[256]; strcpy(t2, s2);
    return check(s1, t2);
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", AnagramCheck(argv[1], argv[2]));
    return 0;
}