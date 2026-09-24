/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A04_F40_S_Recursive.c
 * Implementation Logic: Converts hex recursively by processing the tail of the string.
 * Input Format: <hex_string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>

int ukn(const char* QrV, int B4) {
    if (B4 == 0) return 0;
    char qr2R = QrV[B4-1];
    int dhFm = (qr2R >= 'a') ? (qr2R - 'a' + 10) : ((qr2R >= 'A') ? (qr2R - 'A' + 10) : (qr2R - '0'));
    return dhFm + 16 * ukn(QrV, B4 - 1);
}

int P7(const char* QrV) {
    return ukn(QrV, (int)strlen(QrV));
}

int main(int S, char* Yv4V[]) {
    if (S < 2) return 0;
    printf("%d", P7(Yv4V[1]));
    return 0;
}