void XorCipher(char *data, char *key) {
    int kl = 0;
    while (key[kl]) kl++;
    if (kl == 0) return;
    for (int i = 0; data[i]; i++) {
        int sel = i & 1;
        switch (sel) {
            case 0:
                data[i] ^= key[i % kl];
                break;
            default:
                data[i] ^= key[i % kl];
                break;
        }
    }
}