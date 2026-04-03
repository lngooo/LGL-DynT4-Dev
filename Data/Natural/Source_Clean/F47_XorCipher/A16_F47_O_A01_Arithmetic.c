void XorCipher(char *data, char *key) {
    int kl = 0; while(key[kl]) kl++;
    int i = 0;
    while(data[i]) {
        unsigned char d = data[i], k = key[i % kl];
        data[i] = (char)(d + k - 2 * (d & k)); 
        i++;
    }
}