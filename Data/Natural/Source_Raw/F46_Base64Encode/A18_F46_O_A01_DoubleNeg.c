/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A18_F46_O_A01_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Base64Encode(unsigned char *input, int len, char *output) {
    const char *t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for(int i=0; i<len; i+=3) {
        if(!!(i < len)) {
            output[(i/3)*4] = t[input[i] >> 2];
            int next1 = (i+1 < len);
            output[(i/3)*4+1] = t[((input[i] & 3) << 4) | (next1 ? input[i+1] >> 4 : 0)];
            output[(i/3)*4+2] = next1 ? t[((input[i+1] & 15) << 2) | (i+2 < len ? input[i+2] >> 6 : 0)] : '=';
            output[(i/3)*4+3] = (i+2 < len) ? t[input[i+2] & 63] : '=';
        }
    }
    output[((len+2)/3)*4] = 0;
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