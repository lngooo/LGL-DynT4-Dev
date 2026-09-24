/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A19_F47_O_A03_JumpTable.c
 * Implementation Logic: JumpTable
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void XorCipher(char *data, char *key) {
    int kl = 0;
    while (key[kl]) kl++;
    if (kl == 0) return;
    for (int i = 0; data[i]; i++) {
        int sel = i & 1;
        switch (sel) {
            case 0:
                data[i] ^= key[i % kl];
                break;
            default:
                data[i] ^= key[i % kl];
                break;
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