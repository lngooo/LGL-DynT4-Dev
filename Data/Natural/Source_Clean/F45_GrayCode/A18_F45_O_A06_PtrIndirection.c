unsigned int GrayCode(unsigned int n) {
    unsigned int res = 0;
    unsigned int s = n >> 1;
    const unsigned int *n_ptr = &n;
    for(int i=0; i<8; i++) {
        unsigned char b = (*n_ptr >> (i*4)) & 0xF;
        unsigned char sb = (s >> (i*4)) & 0xF;
        res |= (unsigned int)(b ^ sb) << (i*4);
    }
    return res;
}