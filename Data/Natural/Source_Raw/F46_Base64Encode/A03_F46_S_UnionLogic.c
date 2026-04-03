/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A03_F46_S_UnionLogic.c
 * Implementation Logic: UnionLogic
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Base64Encode(unsigned char *input, int len, char *output) {
    const char *map = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    union { unsigned char b[3]; unsigned int v; } block;
    int i = 0, out_p = 0;
    while (i < len) {
        block.v = 0;
        int count = 0;
        for(int k=0; k<3 && i<len; k++, i++, count++) block.b[2-k] = input[i];
        output[out_p++] = map[(block.v >> 18) & 0x3F];
        output[out_p++] = map[(block.v >> 12) & 0x3F];
        output[out_p++] = (count > 1) ? map[(block.v >> 6) & 0x3F] : '=';
        output[out_p++] = (count > 2) ? map[block.v & 0x3F] : '=';
    }
    output[out_p] = '\0';
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