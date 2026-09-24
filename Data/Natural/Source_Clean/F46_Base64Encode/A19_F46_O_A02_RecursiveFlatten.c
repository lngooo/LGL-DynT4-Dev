static void _base64_rec(unsigned char *input, int len, int i, char *output, int p, const char *t) {
    if (i >= len) {
        output[p] = 0;
        return;
    }
    unsigned int val = input[i] << 16 | (i + 1 < len ? input[i + 1] << 8 : 0) | (i + 2 < len ? input[i + 2] : 0);
    output[p] = t[(val >> 18) & 63];
    output[p + 1] = t[(val >> 12) & 63];
    output[p + 2] = (i + 1 < len) ? t[(val >> 6) & 63] : '=';
    output[p + 3] = (i + 2 < len) ? t[val & 63] : '=';
    _base64_rec(input, len, i + 3, output, p + 4, t);
}
void Base64Encode(unsigned char *input, int len, char *output) {
    const char *t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    _base64_rec(input, len, 0, output, 0, t);
}