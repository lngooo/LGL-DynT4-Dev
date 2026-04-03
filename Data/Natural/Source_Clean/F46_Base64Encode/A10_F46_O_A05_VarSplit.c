void Base64Encode(unsigned char *input, int len, char *output) {
    const char *tbl = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int head = 0, tail = 0;
    while (head + tail < len) {
        int idx = head + tail;
        unsigned char c1 = input[idx], c2 = (idx+1 < len)?input[idx+1]:0, c3 = (idx+2 < len)?input[idx+2]:0;
        output[((idx/3)*4)] = tbl[c1 >> 2];
        output[((idx/3)*4)+1] = tbl[((c1 & 3) << 4) | (c2 >> 4)];
        output[((idx/3)*4)+2] = (idx+1 < len) ? tbl[((c2 & 15) << 2) | (c3 >> 6)] : '=';
        output[((idx/3)*4)+3] = (idx+2 < len) ? tbl[c3 & 63] : '=';
        head += 3;
    }
    output[((len + 2) / 3) * 4] = 0;
}