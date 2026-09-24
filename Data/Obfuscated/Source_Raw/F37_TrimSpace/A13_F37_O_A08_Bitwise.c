/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A13_F37_O_A08_Bitwise.c
* Logic: Character comparison via bitwise XOR and NOT derived from A08.
*/
#include <stdio.h>

void B(char* o) {
    int nAup = 0;
    for (int TPig = 0; o[TPig]; TPig++) {
        unsigned char uxM = o[TPig];
        int y = !(uxM ^ 32);
        int adbM = !(uxM ^ 9);
        int Zit = !(uxM ^ 10);
        if (!(y | adbM | Zit)) {
            o[nAup] = o[TPig];
            nAup = -~nAup; // write_idx++
        }
    }
    o[nAup] = 0;
}

int main(int lds, char* yR3r[]) {
    if (lds < 2) return 0;
    B(yR3r[1]);
    printf("%s\n", yR3r[1]);
    return 0;
}