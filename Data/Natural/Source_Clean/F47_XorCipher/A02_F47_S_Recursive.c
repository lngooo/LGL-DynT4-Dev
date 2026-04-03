void XorCipher(char *data, char *key) {
    static int depth = 0;
    if (*data == '\0') { depth = 0; return; }
    int kl = 0; while (key[kl]) kl++;
    *data ^= key[depth % kl];
    depth++;
    XorCipher(data + 1, key);
}