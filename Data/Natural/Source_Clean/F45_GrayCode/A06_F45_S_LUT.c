static const unsigned char lut[] = {0,1,3,2,6,7,5,4,12,13,15,14,10,11,9,8};

unsigned int GrayCode(unsigned int n) {
    unsigned int res = 0;
    unsigned int s = n >> 1;
    for(int i=0; i<8; i++) {
        unsigned char n_nibble = (n >> (i*4)) & 0xF;
        unsigned char s_nibble = (s >> (i*4)) & 0xF;
        res |= (unsigned int)(n_nibble ^ s_nibble) << (i*4);
    }
    return res;
}