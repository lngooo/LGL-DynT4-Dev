/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A20_F29_O_A04_IterativeRec.c
* Implementation Logic: Reconstructs recursive logic into a stack-based loop (simulated) derived from A04.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int AnagramCheck(char* s1, char* s2) {
    if (strlen(s1) != strlen(s2)) return 0;
    char t2[256]; strcpy(t2, s2);
    int len = strlen(s1);
    for(int i=0; i<len; i++){
        char* p = strchr(t2, s1[i]);
        if(!p) return 0;
        *p = t2[strlen(t2)-1];
        t2[strlen(t2)-1] = '\0';
    }
    return 1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", AnagramCheck(argv[1], argv[2]));
    return 0;
}