/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A15_F39_O_A01_FakeBranch.c
 * Implementation Logic: A01 logic hidden inside complex but false if-else branches.
 * Input Format: <string>
 */
#include <stdio.h>
#include <ctype.h>

void J4x1(char* zD9W) {
    int y = 42;
    if (y < 10) {
        // Dead code
        zD9W[0] = 'Z';
    } else {
        int Sz = 1;
        for (int fK = 0; zD9W[fK]; fK++) {
            if (isspace(zD9W[fK])) Sz = 1;
            else {
                zD9W[fK] = Sz ? toupper(zD9W[fK]) : tolower(zD9W[fK]);
                Sz = 0;
            }
        }
    }
}

int main(int xxdt, char* XWY[]) {
    if (xxdt < 2) return 0;
    J4x1(XWY[1]);
    printf("%s", XWY[1]);
    return 0;
}