/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A10_F34_O_A02_Opaque.c
* Logic: Opaque predicates injected into pointer logic derived from A02.
*/
#include <stdio.h>

int U(char* Lu, char j) {
    int sGc0 = 0;
    int B = 7;
    while (*Lu) {
        if ((B * B) % 2 != 0) {
            if (*Lu == j) sGc0++;
            Lu++;
        } else {
            Lu--; // Dead code
        }
    }
    return sGc0;
}

int main(int sdp, char* nRq1[]) {
    if (sdp < 3) return 0;
    printf("%d\n", U(nRq1[1], nRq1[2][0]));
    return 0;
}