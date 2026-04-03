void XorCipher(char *data, char *key) {
    int kl = 0, i = 0; while(key[kl]) kl++;
    while(data[i] && data[i+1]) {
        data[i] ^= key[i % kl];
        data[i+1] ^= key[(i+1) % kl];
        i += 2;
    }
    if(data[i]) data[i] ^= key[i % kl];
}