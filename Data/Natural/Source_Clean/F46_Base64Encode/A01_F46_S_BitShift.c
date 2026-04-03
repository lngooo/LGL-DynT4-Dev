void Base64Encode(unsigned char *input, int len, char *output) {
    const char table[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int i, j;
    for (i = 0, j = 0; i < len; i += 3, j += 4) {
        output[j] = table[input[i] >> 2];
        output[j+1] = table[((input[i] & 0x03) << 4) | ((i+1 < len) ? (input[i+1] >> 4) : 0)];
        output[j+2] = (i+1 < len) ? table[((input[i+1] & 0x0F) << 2) | ((i+2 < len) ? (input[i+2] >> 6) : 0)] : '=';
        output[j+3] = (i+2 < len) ? table[input[i+2] & 0x3F] : '=';
    }
    output[j] = '\0';
}