/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A07_F48_O_A01_Goto.c
 * Implementation Logic: Goto
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void RLEEncode(const char *in, char *out) {
    int i = 0, j = 0;
start_loop:
    if (!in[i]) goto end;
    int c = 1;
check_next:
    if (in[i+c] && in[i+c] == in[i]) { c++; goto check_next; }
    out[j++] = in[i];
    j += sprintf(out + j, "%d", c);
    i += c;
    goto start_loop;
end:
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