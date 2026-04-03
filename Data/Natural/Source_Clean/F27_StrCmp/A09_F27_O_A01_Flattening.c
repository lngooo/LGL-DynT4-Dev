int StrCmp(const char *s1, const char *s2) {
    int state = 1, res = 0;
    while (state != 0) {
        switch(state) {
            case 1: if(*s1 && (*s1 == *s2)) state = 2; else state = 3; break;
            case 2: s1++; s2++; state = 1; break;
            case 3: res = *(unsigned char *)s1 - *(unsigned char *)s2; state = 0; break;
        }
    }
    return res;
}