/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A18_F48_O_A03_JumpTable.c
 * Implementation Logic: JumpTable
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    char *ptr = (char*)in;
    int written = 0;
loop_rle:
    if (!*ptr) return;
    char c = *ptr;
    int cnt = 1;
    while (*(ptr + cnt) == c) cnt++;
    out[written++] = c;
    written += sprintf(out + written, "%d", cnt);
    ptr += cnt;
    goto loop_rle;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    char *input = argv[1];
    char output[256] = {0};
    RLEEncode(input, output);
    printf("%s\n", output);
    return 0;
}