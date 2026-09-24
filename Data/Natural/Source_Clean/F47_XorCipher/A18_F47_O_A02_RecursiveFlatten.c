static void _xor_rec(char *data, char *key, int kl, int idx) {
    if (data[idx] == 0) return;
    data[idx] ^= key[idx % kl];
    _xor_rec(data, key, kl, idx + 1);
}
void XorCipher(char *data, char *key) {
    int kl = 0;
    while (key[kl]) kl++;
    if (kl == 0) return;
    _xor_rec(data, key, kl, 0);
}