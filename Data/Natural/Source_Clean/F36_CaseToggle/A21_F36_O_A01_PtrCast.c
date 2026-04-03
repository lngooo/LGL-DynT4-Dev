void CaseToggle(char* s) {
    unsigned char *p = (unsigned char*)s;
    while (*p != 0x00) {
        if (*p >= 0x61 && *p <= 0x7A) *p = *p - 0x20;
        else if (*p >= 0x41 && *p <= 0x5A) *p = *p + 0x20;
        p++;
    }
}