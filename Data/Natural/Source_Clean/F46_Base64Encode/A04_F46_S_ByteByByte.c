void Base64Encode(unsigned char *input, int len, char *output) {
    const char *t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int n = 0, m = 0;
    while (n < len) {
        int a = input[n++];
        int b = (n < len) ? input[n++] : -1;
        int c = (n < len) ? input[n++] : -1;
        output[m++] = t[a >> 2];
        output[m++] = t[((a & 3) << 4) | (b == -1 ? 0 : b >> 4)];
        output[m++] = (b == -1) ? '=' : t[((b & 15) << 2) | (c == -1 ? 0 : c >> 6)];
        output[m++] = (c == -1) ? '=' : t[c & 63];
    }
    output[m] = '\0';
}