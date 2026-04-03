void XorCipher(char *data, char *key) {
    int kl = 0; while(key[kl]) kl++;
    for(int i=0; data[i]; i++) {
        int sel = 1;
        if(sel) data[i] ^= key[i % kl];
    }
}