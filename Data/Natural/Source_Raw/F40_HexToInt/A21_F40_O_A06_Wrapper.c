/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A21_F40_O_A06_Wrapper.c
 * Implementation Logic: Library call wrapped in extra function pointers.
 */
#include <stdio.h>

typedef int (*scan_ptr)(const char*, const char*, ...);

int HexToInt(const char* s) {
    int out = 0;
    scan_ptr f = sscanf;
    f(s, "%x", &out);
    return out;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}