void Base64Encode(unsigned char *input, int len, char *output) {
    const char *tbl = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for(int i=0; i<((len+2)/3)*3; i+=3) {
        int b1 = (i < len) ? input[i] : 0;
        int b2 = (i+1 < len) ? input[i+1] : 0;
        int b3 = (i+2 < len) ? input[i+2] : 0;
        output[(i/3)*4] = tbl[b1 >> 2];
        output[(i/3)*4+1] = tbl[((b1 & 3) << 4) | (b2 >> 4)];
        output[(i/3)*4+2] = (i+1 < len) ? tbl[((b2 & 15) << 2) | (b3 >> 6)] : '=';
        output[(i/3)*4+3] = (i+2 < len) ? tbl[b3 & 63] : '=';
    }
    output[((len+2)/3)*4] = 0;
}