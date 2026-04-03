/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A04_F47_S_TwoWay.c
 * Implementation Logic: TwoWay
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void XorCipher(char *data, char *key) {
    int dl = 0, kl = 0;
    while(data[dl]) dl++; while(key[kl]) kl++;
    int l = 0, r = dl - 1;
    while(l <= r) {
        data[l] ^= key[l % kl];
        if(l != r) data[r] ^= key[r % kl];
        l++; r--;
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