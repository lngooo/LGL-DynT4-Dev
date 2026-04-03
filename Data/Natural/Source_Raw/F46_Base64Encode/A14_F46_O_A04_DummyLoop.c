/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A14_F46_O_A04_DummyLoop.c
 * Implementation Logic: DummyLoop
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Base64Encode(unsigned char *input, int len, char *output) {
    const char *t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for(int i=0; i<len; i+=3) {
        for(int d=0; d<1; d++) {
            int a = input[i], b = (i+1<len)?input[i+1]:-1, c = (i+2<len)?input[i+2]:-1;
            output[(i/3)*4] = t[a >> 2];
            output[(i/3)*4+1] = t[((a & 3) << 4) | (b == -1 ? 0 : b >> 4)];
            output[(i/3)*4+2] = (b == -1) ? '=' : t[((b & 15) << 2) | (c == -1 ? 0 : c >> 6)];
            output[(i/3)*4+3] = (c == -1) ? '=' : t[c & 63];
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