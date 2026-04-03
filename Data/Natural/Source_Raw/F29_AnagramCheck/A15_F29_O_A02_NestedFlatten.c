/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A15_F29_O_A02_NestedFlatten.c
* Implementation Logic: Flattening of sorting logic derived from A02.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int AnagramCheck(char* s1, char* s2) {
    int n1 = strlen(s1), n2 = strlen(s2);
    if (n1 != n2) return 0;
    char t1[256], t2[256]; strcpy(t1, s1); strcpy(t2, s2);
    int i = 0, j = 0, st = 0;
    while(st < 2) {
        char *t = (st == 0) ? t1 : t2;
        for(i=0; i<n1-1; i++) for(j=0; j<n1-i-1; j++)
            if(t[j]>t[j+1]){char tmp=t[j]; t[j]=t[j+1]; t[j+1]=tmp;}
        st++;
    }
    return strcmp(t1, t2) == 0;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", AnagramCheck(argv[1], argv[2]));
    return 0;
}