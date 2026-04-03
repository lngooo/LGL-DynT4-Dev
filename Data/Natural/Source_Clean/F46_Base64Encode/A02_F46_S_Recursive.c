void Base64Encode(unsigned char *input, int len, char *output) {
    const char *t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    if (len <= 0) { *output = '\0'; return; }
    unsigned int val = input[0] << 16 | (len > 1 ? input[1] << 8 : 0) | (len > 2 ? input[2] : 0);
    output[0] = t[(val >> 18) & 0x3F];
    output[1] = t[(val >> 12) & 0x3F];
    output[2] = len > 1 ? t[(val >> 6) & 0x3F] : '=';
    output[3] = len > 2 ? t[val & 0x3F] : '=';
    Base64Encode(input + 3, len - 3, output + 4);
}