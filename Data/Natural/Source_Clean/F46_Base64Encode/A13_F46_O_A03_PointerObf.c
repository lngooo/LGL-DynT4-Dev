void Base64Encode(unsigned char *input, int len, char *output) {
    const char *m = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    unsigned char *p = input;
    char *o = output;
    while (p < input + len) {
        int r = (int)(input + len - p);
        *o++ = m[*p >> 2];
        *o++ = m[((*p & 3) << 4) | (r > 1 ? *(p+1) >> 4 : 0)];
        *o++ = (r > 1) ? m[((*(p+1) & 15) << 2) | (r > 2 ? *(p+2) >> 6 : 0)] : '=';
        *o++ = (r > 2) ? m[*(p+2) & 63] : '=';
        p += 3;
    }
    *o = 0;
}