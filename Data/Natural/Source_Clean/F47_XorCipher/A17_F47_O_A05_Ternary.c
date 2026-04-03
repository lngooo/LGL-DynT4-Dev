void XorCipher(char *data, char *key) {
    int kl = 0; while(key[kl]) kl++;
    for(int i=0; data[i]; i++) {
        int m = i % kl;
        data[i] = (m >= 0) ? (data[i] ^ key[m]) : data[i];
    }
}