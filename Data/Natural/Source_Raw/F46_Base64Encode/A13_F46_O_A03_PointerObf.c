/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A13_F46_O_A03_PointerObf.c
 * Implementation Logic: PointerObf
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Base64Encode(unsigned char *input, int len, char *output) {
    const char *m = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    unsigned char *p = input;
    char *o = output;
    while (p < input + len) {
        int r = (int)(input + len - p);
        *o++ = m[*p >> 2];
        *o++ = m[((*p & 3) << 4) | (r > 1 ? *(p+1) >> 4 : 0)];
        *o++ = (r > 1) ? m[((*(p+1) & 15) << 2) | (r > 2 ? *(p+2) >> 6 : 0)] : '=';
        *o++ = (r > 2) ? m[*(p+2) & 63] : '=';
        p += 3;
    }
    *o = 0;
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