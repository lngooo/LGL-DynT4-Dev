/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A03_F47_S_Pointer.c
 * Implementation Logic: Pointer
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void XorCipher(char *data, char *key) {
    char *p = data, *k = key;
    while (*p) {
        if (!*k) k = key;
        *p ^= *k;
        p++; k++;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    char *data = argv[1];
    char *key = argv[2];
    int data_len = 0;
    while (data[data_len]) data_len++;

    XorCipher(data, key);

    for (int i = 0; i < data_len; i++) {
        printf("%02x", (unsigned char)data[i]);
    }
    printf("\n");
    return 0;
}