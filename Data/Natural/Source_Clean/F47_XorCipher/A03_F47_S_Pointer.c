void XorCipher(char *data, char *key) {
    char *p = data, *k = key;
    while (*p) {
        if (!*k) k = key;
        *p ^= *k;
        p++; k++;
    }
}