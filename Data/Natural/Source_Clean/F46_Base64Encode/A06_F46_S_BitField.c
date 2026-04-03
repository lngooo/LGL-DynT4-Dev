void Base64Encode(unsigned char *input, int len, char *output) {
    const char *abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    struct { unsigned int a:6; unsigned int b:6; unsigned int c:6; unsigned int d:6; } bits;
    int i = 0, p = 0;
    while(i < len) {
        unsigned int chunk = (input[i] << 16) | ((i+1 < len ? input[i+1] : 0) << 8) | (i+2 < len ? input[i+2] : 0);
        bits.a = (chunk >> 18) & 0x3F; bits.b = (chunk >> 12) & 0x3F;
        bits.c = (chunk >> 6) & 0x3F;  bits.d = chunk & 0x3F;
        output[p++] = abc[bits.a]; output[p++] = abc[bits.b];
        output[p++] = (i+1 < len) ? abc[bits.c] : '=';
        output[p++] = (i+2 < len) ? abc[bits.d] : '=';
        i += 3;
    }
    output[p] = '\0';
}