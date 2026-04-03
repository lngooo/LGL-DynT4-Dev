/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A19_F37_O_A01_LongLong.c
* Logic: Uses 64-bit long long for all index counters derived from A01.
*/
#include <stdio.h>
#include <ctype.h>

void TrimSpace(char* s) {
    long long read_ptr = 0;
    long long write_ptr = 0;
    while (s[read_ptr] != '\0') {
        if (!isspace((unsigned char)s[read_ptr])) {
            s[write_ptr] = s[read_ptr];
            write_ptr += 1LL;
        }
        read_ptr += 1LL;
    }
    s[write_ptr] = '\0';
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TrimSpace(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}