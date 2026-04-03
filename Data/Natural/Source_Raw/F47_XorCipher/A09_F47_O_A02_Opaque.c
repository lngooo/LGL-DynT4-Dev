/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A09_F47_O_A02_Opaque.c
 * Implementation Logic: Opaque
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void XorCipher(char *data, char *key) {
    int kl = 0; while(key[kl]) kl++;
    if (*data != '\0') {
        if ((kl * kl + 7) > 0) {
            static int idx = 0;
            *data ^= key[idx % kl];
            idx++;
            XorCipher(data + 1, key);
            if (*(data-1) == 0) idx = 0; 
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