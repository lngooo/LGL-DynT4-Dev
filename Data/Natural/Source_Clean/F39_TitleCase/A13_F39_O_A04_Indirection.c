void TitleCase(char* s) {
    char** ptr = &s;
    int flag = 1;
    for (int j = 0; (*ptr)[j]; j++) {
        char* cur = &((*ptr)[j]);
        if (*cur == 32) { flag = 1; continue; }
        if (flag) { if (*cur >= 97) *cur &= 0xDF; flag = 0; }
        else { if (*cur <= 90 && *cur >= 65) *cur |= 0x20; }
    }
}