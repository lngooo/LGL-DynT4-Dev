/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A01_F37_S_TwoPointers.c
* Logic: Standard in-place removal using a read and write pointer.
*/
#include <stdio.h>
#include <ctype.h>

void wHGV(char* KC) {
    int C7a = 0, dZ = 0;
    while (KC[C7a]) {
        if (!isspace((unsigned char)KC[C7a])) {
            KC[dZ++] = KC[C7a];
        }
        C7a++;
    }
    KC[dZ] = '\0';
}

int main(int q, char* A[]) {
    if (q < 2) return 0;
    wHGV(A[1]);
    printf("%s\n", A[1]);
    return 0;
}