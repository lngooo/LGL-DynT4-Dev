/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A12_F47_O_A01_Unroll.c
 * Implementation Logic: Unroll
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void XorCipher(char *data, char *key) {
    int kl = 0, i = 0; while(key[kl]) kl++;
    while(data[i] && data[i+1]) {
        data[i] ^= key[i % kl];
        data[i+1] ^= key[(i+1) % kl];
        i += 2;
    }
    if(data[i]) data[i] ^= key[i % kl];
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