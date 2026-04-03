/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A16_F47_O_A01_Arithmetic.c
 * Implementation Logic: Arithmetic
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void XorCipher(char *data, char *key) {
    int kl = 0; while(key[kl]) kl++;
    int i = 0;
    while(data[i]) {
        unsigned char d = data[i], k = key[i % kl];
        data[i] = (char)(d + k - 2 * (d & k)); // XOR identity: a+b-2(a&b)
        i++;
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