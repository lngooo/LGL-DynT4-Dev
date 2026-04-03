void Base64Encode(unsigned char *input, int len, char *output) {
    const char *t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for(int i=0; i<len; i+=3) {
        int a = input[i];
        output[(i/3)*4] = t[(a >> 2) & 63];
        int b = (i+1 < len) ? input[i+1] : -1;
        output[(i/3)*4+1] = t[((a & 3) << 4) | (b == -1 ? 0 : (b >> 4))];
        int c = (i+2 < len) ? input[i+2] : -1;
        if (b != -1) output[(i/3)*4+2] = t[((b & 15) << 2) | (c == -1 ? 0 : (c >> 6))];
        else output[(i/3)*4+2] = '=';
        if (c != -1) output[(i/3)*4+3] = t[c & 63];
        else output[(i/3)*4+3] = '=';
    }
    output[((len+2)/3)*4] = 0;
}