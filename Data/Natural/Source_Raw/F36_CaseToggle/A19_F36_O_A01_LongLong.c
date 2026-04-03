/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A19_F36_O_A01_LongLong.c
* Logic: Uses 64-bit integer casts for character math derived from A01.
*/
#include <stdio.h>

void CaseToggle(char* s) {
    for (int i = 0; s[i]; i++) {
        long long val = (long long)s[i];
        if (val >= 97LL && val <= 122LL) val -= 32LL;
        else if (val >= 65LL && val <= 90LL) val += 32LL;
        s[i] = (char)val;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    CaseToggle(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}