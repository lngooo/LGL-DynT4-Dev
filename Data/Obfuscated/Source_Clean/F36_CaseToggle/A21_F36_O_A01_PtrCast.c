void bU1I(char* QGb) {
    unsigned char *I = (unsigned char*)QGb;
    while (*I != 0x00) {
        if (*I >= 0x61 && *I <= 0x7A) *I = *I - 0x20;
        else if (*I >= 0x41 && *I <= 0x5A) *I = *I + 0x20;
        I++;
    }
}