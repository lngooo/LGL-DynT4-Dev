/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A21_F46_O_A03_JumpTable.c
 * Implementation Logic: JumpTable
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Base64Encode(unsigned char *input, int len, char *output) {
    const char *m = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for(int i=0; i<len; i+=3) {
        unsigned int v = (input[i]<<16) | (i+1<len?input[i+1]<<8:0) | (i+2<len?input[i+2]:0);
        for(int k=0; k<4; k++) {
            int sel = k;
            if(sel == 0) output[(i/3)*4] = m[(v>>18)&63];
            else if(sel == 1) output[(i/3)*4+1] = m[(v>>12)&63];
            else if(sel == 2) output[(i/3)*4+2] = (i+1<len)?m[(v>>6)&63]:'=';
            else output[(i/3)*4+3] = (i+2<len)?m[v&63]:'=';
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