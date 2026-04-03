/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A21_F31_O_A07_ArraySim.c
* Implementation Logic: Uses a local buffer to track space state transitions derived from A07.
*/
#include <stdio.h>
#include <string.h>

int WordCount(char* s) {
    int n = (int)strlen(s);
    if (n == 0) return 0;
    int spaces[1024], c = 0;
    for(int i=0; i<n; i++) spaces[i] = (s[i]==' '||s[i]=='\t');
    for(int i=0; i<n; i++) if(!spaces[i] && (i==0 || spaces[i-1])) c++;
    return c;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}