void XorCipher(char *data, char *key) {
    int kl = 0; while(key[kl]) kl++;
    int i = 0;
    while(data[i]) {
        int d_val = (unsigned char)data[i];
        int k_val = (unsigned char)key[i % kl];
        data[i] = (char)(d_val ^ k_val);
        i++;
    }
}