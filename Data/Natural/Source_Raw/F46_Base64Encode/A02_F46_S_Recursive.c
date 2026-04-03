/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A02_F46_S_Recursive.c
 * Implementation Logic: Recursive
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Base64Encode(unsigned char *input, int len, char *output) {
    const char *t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    if (len <= 0) { *output = '\0'; return; }
    unsigned int val = input[0] << 16 | (len > 1 ? input[1] << 8 : 0) | (len > 2 ? input[2] : 0);
    output[0] = t[(val >> 18) & 0x3F];
    output[1] = t[(val >> 12) & 0x3F];
    output[2] = len > 1 ? t[(val >> 6) & 0x3F] : '=';
    output[3] = len > 2 ? t[val & 0x3F] : '=';
    Base64Encode(input + 3, len - 3, output + 4);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    unsigned char *input = (unsigned char *)argv[1];
    int len = 0;
    while (input[len]) len++;
    char output[400] = {0};
    Base64Encode(input, len, output);
    printf("%s\n", output);
    return 0;
}