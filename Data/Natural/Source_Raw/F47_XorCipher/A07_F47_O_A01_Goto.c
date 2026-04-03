/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A07_F47_O_A01_Goto.c
 * Implementation Logic: Goto
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void XorCipher(char *data, char *key) {
    int i = 0, kl = 0;
    while(key[kl]) kl++;
loop:
    if (data[i] == '\0') goto end;
    data[i] = data[i] ^ key[i % kl];
    i++;
    goto loop;
end:;
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