/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A01_F30_S_NaiveIter.c
* Implementation Logic: Standard nested loop brute-force search.
* Input Format: <text> <pattern>
*/
#include <stdio.h>
#include <string.h>

int XR(char* e, char* C8h) {
    int wQza = strlen(e);
    int vyx = strlen(C8h);
    if (vyx == 0) return 0;
    for (int tB = 0; tB <= wQza - vyx; tB++) {
        int ONLc;
        for (ONLc = 0; ONLc < vyx; ONLc++) {
            if (e[tB + ONLc] != C8h[ONLc]) break;
        }
        if (ONLc == vyx) return tB;
    }
    return -1;
}

int main(int cFuw, char* q[]) {
    if (cFuw < 3) return 0;
    printf("%d\n", XR(q[1], q[2]));
    return 0;
}