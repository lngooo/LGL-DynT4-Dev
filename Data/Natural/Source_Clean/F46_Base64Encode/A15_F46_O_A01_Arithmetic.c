void Base64Encode(unsigned char *input, int len, char *output) {
    const char *t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int i = 0;
    while(i < len) {
        int chunk = input[i] * 65536 + (i+1<len?input[i+1]:0) * 256 + (i+2<len?input[i+2]:0);
        output[(i/3)*4] = t[(chunk / 262144) % 64];
        output[(i/3)*4+1] = t[(chunk / 4096) % 64];
        output[(i/3)*4+2] = (i+1 < len) ? t[(chunk / 64) % 64] : '=';
        output[(i/3)*4+3] = (i+2 < len) ? t[chunk % 64] : '=';
        i += 3;
    }
    output[((len+2)/3)*4] = 0;
}