/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A13_F40_O_A03_Indirection.c
 * Implementation Logic: A03 with nested pointer indirection for the map.
 */
#include <stdio.h>

int HexToInt(const char* s) {
    static int m[256];
    for(int i=0; i<10; i++) m['0'+i]=i;
    for(int i=0; i<6; i++) { m['a'+i]=10+i; m['A'+i]=10+i; }
    int res = 0;
    const int* p = m;
    while(*s) {
        res = (res << 4) + *(p + (unsigned char)*s);
        s++;
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}