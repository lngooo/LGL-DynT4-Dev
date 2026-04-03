void XorCipher(char *data, char *key) {
    static int cnt = 0;
    int kl = 0; while(key[kl]) kl++;
    while(*data) {
        *data ^= key[cnt % kl];
        cnt++; data++;
    }
    cnt = 0;
}