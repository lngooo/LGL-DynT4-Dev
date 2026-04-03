void XorCipher(char *data, char *key) {
    char *cur = data;
    int k_p1 = 0, k_p2 = 0;
    int kl = 0; while(key[kl]) kl++;
    while(*cur) {
        *cur ^= key[(k_p1 + k_p2) % kl];
        cur++; k_p1++;
    }
}