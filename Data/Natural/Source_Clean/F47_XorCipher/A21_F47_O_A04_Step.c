void XorCipher(char *data, char *key) {
    int dl = 0, kl = 0;
    while(data[dl]) dl++; while(key[kl]) kl++;
    int cur = 0;
    while(cur < dl) {
        data[cur] ^= key[cur % kl];
        cur++;
    }
}