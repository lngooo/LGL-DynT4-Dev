/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A13_F37_O_A08_Bitwise.c
* Logic: Character comparison via bitwise XOR and NOT derived from A08.
*/
#include <stdio.h>

void TrimSpace(char* s) {
    int write_idx = 0;
    for (int k = 0; s[k]; k++) {
        unsigned char c = s[k];
        int is_s = !(c ^ 32);
        int is_t = !(c ^ 9);
        int is_n = !(c ^ 10);
        if (!(is_s | is_t | is_n)) {
            s[write_idx] = s[k];
            write_idx = -~write_idx; // write_idx++
        }
    }
    s[write_idx] = 0;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TrimSpace(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}