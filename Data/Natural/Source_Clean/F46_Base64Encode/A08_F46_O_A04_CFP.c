void Base64Encode(unsigned char *input, int len, char *output) {
    const char *t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int state = 0, n = 0, m = 0;
    while (state != -1) {
        switch(state) {
            case 0: state = (n < len) ? 1 : -1; break;
            case 1: output[m++] = t[input[n] >> 2];
                    output[m++] = t[((input[n] & 3) << 4) | (n+1 < len ? input[n+1] >> 4 : 0)];
                    state = (n+1 < len) ? 2 : 3; break;
            case 2: output[m++] = t[((input[n+1] & 15) << 2) | (n+2 < len ? input[n+2] >> 6 : 0)];
                    state = (n+2 < len) ? 4 : 5; break;
            case 3: output[m++] = '='; output[m++] = '='; n += 3; state = 0; break;
            case 4: output[m++] = t[input[n+2] & 63]; n += 3; state = 0; break;
            case 5: output[m++] = '='; n += 3; state = 0; break;
        }
    }
    output[m] = '\0';
}