void Base64Encode(unsigned char *input, int len, char *output) {
    const char *t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int i = 0, j = 0;
start:
    if (i >= len) goto end;
    output[j++] = t[input[i] >> 2];
    output[j++] = t[((input[i] & 3) << 4) | (i+1 < len ? input[i+1] >> 4 : 0)];
    if (i + 1 >= len) { output[j++] = '='; output[j++] = '='; goto end; }
    output[j++] = t[((input[i+1] & 15) << 2) | (i+2 < len ? input[i+2] >> 6 : 0)];
    if (i + 2 >= len) { output[j++] = '='; goto end; }
    output[j++] = t[input[i+2] & 63];
    i += 3;
    goto start;
end:
    output[j] = '\0';
}