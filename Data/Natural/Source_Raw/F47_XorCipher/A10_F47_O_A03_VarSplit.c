/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A10_F47_O_A03_VarSplit.c
 * Implementation Logic: VarSplit
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void XorCipher(char *data, char *key) {
    char *cur = data;
    int k_p1 = 0, k_p2 = 0;
    int kl = 0; while(key[kl]) kl++;
    while(*cur) {
        *cur ^= key[(k_p1 + k_p2) % kl];
        cur++; k_p1++;
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