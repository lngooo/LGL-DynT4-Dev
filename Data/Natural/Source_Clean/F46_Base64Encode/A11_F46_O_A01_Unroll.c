void Base64Encode(unsigned char *input, int len, char *output) {
    const char *t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int i = 0, j = 0;
    while (i + 5 < len) {
        for(int k=0; k<2; k++) {
            output[j] = t[input[i] >> 2];
            output[j+1] = t[((input[i] & 3) << 4) | (input[i+1] >> 4)];
            output[j+2] = t[((input[i+1] & 15) << 2) | (input[i+2] >> 6)];
            output[j+3] = t[input[i+2] & 63];
            i += 3; j += 4;
        }
    }
    while(i < len) {
        output[j++] = t[input[i] >> 2];
        output[j++] = t[((input[i] & 3) << 4) | (i+1 < len ? input[i+1] >> 4 : 0)];
        output[j++] = (i+1 < len) ? t[((input[i+1] & 15) << 2) | (i+2 < len ? input[i+2] >> 6 : 0)] : '=';
        output[j++] = (i+2 < len) ? t[input[i+2] & 63] : '=';
        i += 3;
    }
    output[j] = 0;
}