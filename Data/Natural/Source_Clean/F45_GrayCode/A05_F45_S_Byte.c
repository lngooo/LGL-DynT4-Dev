unsigned int GrayCode(unsigned int n) {
    unsigned char bytes[4];
    unsigned int shifted = n >> 1;
    unsigned char s_bytes[4];
    for(int i=0; i<4; i++) {
        bytes[i] = (n >> (i*8)) & 0xFF;
        s_bytes[i] = (shifted >> (i*8)) & 0xFF;
    }
    unsigned int res = 0;
    for(int i=0; i<4; i++) {
        res |= (unsigned int)(bytes[i] ^ s_bytes[i]) << (i*8);
    }
    return res;
}