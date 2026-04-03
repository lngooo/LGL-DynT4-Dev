void XorCipher(char *data, char *key) {
    for(char *p = data; *p != 0; p++) {
        int offset = (int)(p - data);
        int kl = 0; while(key[kl]) kl++;
        *p ^= *(key + (offset % kl));
    }
}