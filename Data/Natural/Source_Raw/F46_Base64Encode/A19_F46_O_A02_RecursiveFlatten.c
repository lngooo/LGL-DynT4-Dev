/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A19_F46_O_A02_RecursiveFlatten.c
 * Implementation Logic: RecursiveFlatten
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static void _base64_rec(unsigned char *input, int len, int i, char *output, int p, const char *t) {
    if (i >= len) {
        output[p] = 0;
        return;
    }
    unsigned int val = input[i] << 16 | (i + 1 < len ? input[i + 1] << 8 : 0) | (i + 2 < len ? input[i + 2] : 0);
    output[p] = t[(val >> 18) & 63];
    output[p + 1] = t[(val >> 12) & 63];
    output[p + 2] = (i + 1 < len) ? t[(val >> 6) & 63] : '=';
    output[p + 3] = (i + 2 < len) ? t[val & 63] : '=';
    _base64_rec(input, len, i + 3, output, p + 4, t);
}
void Base64Encode(unsigned char *input, int len, char *output) {
    const char *t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    _base64_rec(input, len, 0, output, 0, t);
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