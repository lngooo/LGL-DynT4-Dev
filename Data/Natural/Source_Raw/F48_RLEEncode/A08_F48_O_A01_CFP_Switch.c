/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A08_F48_O_A01_CFP_Switch.c
 * Implementation Logic: Switch
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    int state = 0, i = 0, j = 0;
    while (state != 3) {
        switch (state) {
            case 0: state = (in[i] == 0) ? 3 : 1; break;
            case 1: {
                int count = 0;
                char cur = in[i];
                while (in[i+count] == cur) count++;
                out[j++] = cur;
                j += sprintf(out + j, "%d", count);
                i += count;
                state = 0; break;
            }
        }
    }
    out[j] = 0;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    char *input = argv[1];
    char output[256] = {0};
    RLEEncode(input, output);
    printf("%s\n", output);
    return 0;
}