/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A19_F40_O_A02_StepObf.c
 * Implementation Logic: Loop with non-trivial index increment.
 */
#include <stdio.h>
#include <string.h>

int HexToInt(const char* s) {
    int r = 0, i = 0, n = strlen(s);
    while (i < n) {
        int v = (s[i] <= '9') ? (s[i]-'0') : ((s[i]|32)-'a'+10);
        r = (r << 4) | v;
        i += 1;
    }
    return r;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}