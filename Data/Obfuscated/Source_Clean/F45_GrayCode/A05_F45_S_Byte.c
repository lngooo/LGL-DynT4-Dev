unsigned int ad(unsigned int b) {
    unsigned char pYsV[4];
    unsigned int DpLh = b >> 1;
    unsigned char a[4];
    for(int h=0; h<4; h++) {
        pYsV[h] = (b >> (h*8)) & 0xFF;
        a[h] = (DpLh >> (h*8)) & 0xFF;
    }
    unsigned int hzZ = 0;
    for(int h=0; h<4; h++) {
        hzZ |= (unsigned int)(pYsV[h] ^ a[h]) << (h*8);
    }
    return hzZ;
}