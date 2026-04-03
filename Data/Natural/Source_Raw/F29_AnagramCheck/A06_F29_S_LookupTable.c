/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A06_F29_S_LookupTable.c
* Implementation Logic: Uses a pre-allocated static table to simulate character set constraints.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

static int table[256];
int AnagramCheck(char* s1, char* s2) {
    memset(table, 0, sizeof(table));
    int i = 0;
    while(s1[i]) { table[(unsigned char)s1[i]]++; i++; }
    i = 0;
    while(s2[i]) { table[(unsigned char)s2[i]]--; i++; }
    for(i=0; i<256; i++) if(table[i] != 0) return 0;
    return (strlen(s1) == strlen(s2));
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", AnagramCheck(argv[1], argv[2]));
    return 0;
}