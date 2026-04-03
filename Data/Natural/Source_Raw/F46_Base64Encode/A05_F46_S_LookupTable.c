/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A05_F46_S_LookupTable.c
 * Implementation Logic: LookupTable
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Base64Encode(unsigned char *input, int len, char *output) {
    const char *tbl = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for (int i = 0, j = 0; i < len; i += 3) {
        unsigned char b1 = input[i], b2 = (i+1 < len) ? input[i+1] : 0, b3 = (i+2 < len) ? input[i+2] : 0;
        output[j++] = tbl[b1 >> 2];
        output[j++] = tbl[((b1 & 0x03) << 4) | (b2 >> 4)];
        output[j++] = (i+1 < len) ? tbl[((b2 & 0x0F) << 2) | (b3 >> 6)] : '=';
        output[j++] = (i+2 < len) ? tbl[b3 & 0x3F] : '=';
    }
    output[((len + 2) / 3) * 4] = '\0';
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