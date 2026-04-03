void XorCipher(char *data, char *key) {
    int dl = 0, kl = 0;
    while(data[dl]) dl++; while(key[kl]) kl++;
    for(int i=0; i<dl; i++) {
        for(int d=0; d<1; d++) data[i] ^= key[i % kl];
    }
}