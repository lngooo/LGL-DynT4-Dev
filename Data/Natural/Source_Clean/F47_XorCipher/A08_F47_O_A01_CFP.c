void XorCipher(char *data, char *key) {
    int s = 0, i = 0, kl = 0;
    while(key[kl]) kl++;
    while(s != 2) {
        switch(s) {
            case 0: s = (data[i] == 0) ? 2 : 1; break;
            case 1: data[i] ^= key[i % kl]; i++; s = 0; break;
        }
    }
}