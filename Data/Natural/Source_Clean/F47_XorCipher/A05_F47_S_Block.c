void XorCipher(char *data, char *key) {
    int dl = 0, kl = 0;
    while(data[dl]) dl++; while(key[kl]) kl++;
    for(int i=0; i < dl; i += kl) {
        for(int j=0; j < kl && (i+j) < dl; j++) {
            data[i+j] ^= key[j];
        }
    }
}