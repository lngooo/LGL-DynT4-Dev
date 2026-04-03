void Base64Encode(unsigned char *input, int len, char *output) {
    const char *t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for(int i=0; i<len; i+=3) {
        for(int d=0; d<1; d++) {
            int a = input[i], b = (i+1<len)?input[i+1]:-1, c = (i+2<len)?input[i+2]:-1;
            output[(i/3)*4] = t[a >> 2];
            output[(i/3)*4+1] = t[((a & 3) << 4) | (b == -1 ? 0 : b >> 4)];
            output[(i/3)*4+2] = (b == -1) ? '=' : t[((b & 15) << 2) | (c == -1 ? 0 : c >> 6)];
            output[(i/3)*4+3] = (c == -1) ? '=' : t[c & 63];
        }
    }
    output[((len+2)/3)*4] = 0;
}