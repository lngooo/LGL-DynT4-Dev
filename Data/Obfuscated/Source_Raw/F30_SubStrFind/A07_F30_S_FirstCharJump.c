/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A07_F30_S_FirstCharJump.c
* Implementation Logic: Locate the first character using strchr then verify pattern.
* Input Format: <text> <pattern>
*/
#include <stdio.h>
#include <string.h>

int LA(char* J, char* o) {
    char* jt = J;
    int VS = strlen(o);
    if (VS == 0) return 0;
    while ((jt = strchr(jt, o[0])) != NULL) {
        if (strncmp(jt, o, VS) == 0) return (int)(jt - J);
        jt++;
    }
    return -1;
}

int main(int axdG, char* h[]) {
    if (axdG < 3) return 0;
    printf("%d\n", LA(h[1], h[2]));
    return 0;
}