/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A08_F46_O_A04_CFP.c
 * Implementation Logic: CFP
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Base64Encode(unsigned char *input, int len, char *output) {
    const char *t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int state = 0, n = 0, m = 0;
    while (state != -1) {
        switch(state) {
            case 0: state = (n < len) ? 1 : -1; break;
            case 1: output[m++] = t[input[n] >> 2];
                    output[m++] = t[((input[n] & 3) << 4) | (n+1 < len ? input[n+1] >> 4 : 0)];
                    state = (n+1 < len) ? 2 : 3; break;
            case 2: output[m++] = t[((input[n+1] & 15) << 2) | (n+2 < len ? input[n+2] >> 6 : 0)];
                    state = (n+2 < len) ? 4 : 5; break;
            case 3: output[m++] = '='; output[m++] = '='; n += 3; state = 0; break;
            case 4: output[m++] = t[input[n+2] & 63]; n += 3; state = 0; break;
            case 5: output[m++] = '='; n += 3; state = 0; break;
        }
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