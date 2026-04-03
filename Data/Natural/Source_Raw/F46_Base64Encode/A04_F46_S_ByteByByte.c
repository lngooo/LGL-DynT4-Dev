/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A04_F46_S_ByteByByte.c
 * Implementation Logic: ByteByByte
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Base64Encode(unsigned char *input, int len, char *output) {
    const char *t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int n = 0, m = 0;
    while (n < len) {
        int a = input[n++];
        int b = (n < len) ? input[n++] : -1;
        int c = (n < len) ? input[n++] : -1;
        output[m++] = t[a >> 2];
        output[m++] = t[((a & 3) << 4) | (b == -1 ? 0 : b >> 4)];
        output[m++] = (b == -1) ? '=' : t[((b & 15) << 2) | (c == -1 ? 0 : c >> 6)];
        output[m++] = (c == -1) ? '=' : t[c & 63];
    }
    output[m] = '\0';
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