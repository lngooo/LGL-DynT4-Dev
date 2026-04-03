void Base64Encode(unsigned char *input, int len, char *output) {
    const char *abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for(int i=0; i<len; i+=3) {
        unsigned int v = (input[i] << 16) ^ ((i+1<len?input[i+1]:0) << 8) ^ (i+2<len?input[i+2]:0);
        output[(i/3)*4] = abc[(v >> 18) & 63];
        output[(i/3)*4+1] = abc[(v >> 12) & 63];
        output[(i/3)*4+2] = (i+1 < len) ? abc[(v >> 6) & 63] : '=';
        output[(i/3)*4+3] = (i+2 < len) ? abc[v & 63] : '=';
    }
    output[((len+2)/3)*4] = 0;
}