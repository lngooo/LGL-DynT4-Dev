/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A17_F46_O_A06_LogicInvert.c
 * Implementation Logic: LogicInvert
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Base64Encode(unsigned char *input, int len, char *output) {
    const char *abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int i = 0;
    while (i < len) {
        unsigned int v = (input[i] << 16) | (i+1<len ? input[i+1] << 8 : 0) | (i+2<len ? input[i+2] : 0);
        for(int k=0; k<4; k++) {
            if (k == 0) output[(i/3)*4+k] = abc[(v >> 18) & 0x3F];
            else if (k == 1) output[(i/3)*4+k] = abc[(v >> 12) & 0x3F];
            else if (k == 2) output[(i/3)*4+k] = (i+1 < len) ? abc[(v >> 6) & 0x3F] : '=';
            else output[(i/3)*4+k] = (i+2 < len) ? abc[v & 0x3F] : '=';
        }
        i += 3;
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