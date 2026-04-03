void Base64Encode(unsigned char *input, int len, char *output) {
    const char *t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    if (len <= 0) { *output = 0; return; }
    int i = 0, p = 0;
    do {
        unsigned int val = input[i] << 16 | (i+1 < len ? input[i+1] << 8 : 0) | (i+2 < len ? input[i+2] : 0);
        output[p++] = t[(val >> 18) & 63];
        output[p++] = t[(val >> 12) & 63];
        output[p++] = (i+1 < len) ? t[(val >> 6) & 63] : '=';
        output[p++] = (i+2 < len) ? t[val & 63] : '=';
        i += 3;
    } while(i < len);
    output[p] = 0;
}