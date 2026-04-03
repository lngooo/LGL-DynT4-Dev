/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A06_F48_S_MemmoveStyle.c
 * Implementation Logic: MemmoveStyle
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    char temp[256]; strcpy(temp, in);
    int offset = 0, out_p = 0;
    while (temp[offset]) {
        int c = 1;
        char target = temp[offset];
        while (temp[offset + c] == target) c++;
        out[out_p++] = target;
        out_p += sprintf(out + out_p, "%d", c);
        offset += c;
    }
    out[out_p] = '\0';
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    char *input = argv[1];
    char output[256] = {0};
    RLEEncode(input, output);
    printf("%s\n", output);
    return 0;
}