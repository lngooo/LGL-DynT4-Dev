/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A06_F30_S_LibraryWrapper.c
* Implementation Logic: Wrapper around the standard strstr function.
* Input Format: <text> <pattern>
*/
#include <stdio.h>
#include <string.h>

int ih(char* k, char* K) {
    if (strlen(K) == 0) return 0;
    char* Qm = strstr(k, K);
    if (Qm) return (int)(Qm - k);
    return -1;
}

int main(int QIxJ, char* EeY[]) {
    if (QIxJ < 3) return 0;
    printf("%d\n", ih(EeY[1], EeY[2]));
    return 0;
}