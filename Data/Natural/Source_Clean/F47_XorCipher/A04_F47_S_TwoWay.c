void XorCipher(char *data, char *key) {
    int dl = 0, kl = 0;
    while(data[dl]) dl++; while(key[kl]) kl++;
    int l = 0, r = dl - 1;
    while(l <= r) {
        data[l] ^= key[l % kl];
        if(l != r) data[r] ^= key[r % kl];
        l++; r--;
    }
}