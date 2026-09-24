void Base64Encode(unsigned char *input, int len, char *output) {
    const char *m = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for (int i = 0; i < len; i += 3) {
        unsigned int v = (input[i] << 16) | (i + 1 < len ? input[i + 1] << 8 : 0) | (i + 2 < len ? input[i + 2] : 0);
        for (int k = 0; k < 4; k++) {
            switch (k) {
                case 0:
                    output[(i / 3) * 4] = m[(v >> 18) & 63];
                    break;
                case 1:
                    output[(i / 3) * 4 + 1] = m[(v >> 12) & 63];
                    break;
                case 2:
                    output[(i / 3) * 4 + 2] = (i + 1 < len) ? m[(v >> 6) & 63] : '=';
                    break;
                default:
                    output[(i / 3) * 4 + 3] = (i + 2 < len) ? m[v & 63] : '=';
                    break;
            }
        }
    }
    output[((len + 2) / 3) * 4] = 0;
}