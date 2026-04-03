void Base64Encode(unsigned char *input, int len, char *output) {
    const char *tbl = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for (int i = 0, j = 0; i < len; i += 3) {
        unsigned char b1 = input[i], b2 = (i+1 < len) ? input[i+1] : 0, b3 = (i+2 < len) ? input[i+2] : 0;
        output[j++] = tbl[b1 >> 2];
        output[j++] = tbl[((b1 & 0x03) << 4) | (b2 >> 4)];
        output[j++] = (i+1 < len) ? tbl[((b2 & 0x0F) << 2) | (b3 >> 6)] : '=';
        output[j++] = (i+2 < len) ? tbl[b3 & 0x3F] : '=';
    }
    output[((len + 2) / 3) * 4] = '\0';
}