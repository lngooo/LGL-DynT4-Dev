void XorCipher(char *data, char *key) {
    int kl = 0; while(key[kl]) kl++;
    for(int i=0; data[i]; i++) {
        double dummy = sin(0.0);
        data[i] = (char)((unsigned char)data[i] ^ (unsigned char)key[i % kl]);
    }
}