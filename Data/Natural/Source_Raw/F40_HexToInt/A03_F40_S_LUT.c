/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A03_F40_S_LUT.c
 * Implementation Logic: Uses a pre-computed array to map ASCII characters to hex values.
 * Input Format: <hex_string>
 */
#include <stdio.h>

int HexToInt(const char* s) {
    static const int map[256] = {['0']=0, ['1']=1, ['2']=2, ['3']=3, ['4']=4, ['5']=5, ['6']=6, ['7']=7, ['8']=8, ['9']=9, ['a']=10, ['b']=11, ['c']=12, ['d']=13, ['e']=14, ['f']=15, ['A']=10, ['B']=11, ['C']=12, ['D']=13, ['E']=14, ['F']=15};
    int res = 0;
    for (; *s; s++) {
        res = (res * 16) + map[(unsigned char)*s];
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d", HexToInt(argv[1]));
    return 0;
}