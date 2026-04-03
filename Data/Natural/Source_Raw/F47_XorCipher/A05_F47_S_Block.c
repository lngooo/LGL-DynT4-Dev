/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A05_F47_S_Block.c
 * Implementation Logic: Block
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void XorCipher(char *data, char *key) {
    int dl = 0, kl = 0;
    while(data[dl]) dl++; while(key[kl]) kl++;
    for(int i=0; i < dl; i += kl) {
        for(int j=0; j < kl && (i+j) < dl; j++) {
            data[i+j] ^= key[j];
        }
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