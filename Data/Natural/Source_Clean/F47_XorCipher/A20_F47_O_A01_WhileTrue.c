void XorCipher(char *data, char *key) {
    int i = 0, kl = 0;
    while(key[kl]) kl++;
    while(1) {
        if(!data[i]) break;
        data[i] ^= key[i % kl];
        i++;
    }
}