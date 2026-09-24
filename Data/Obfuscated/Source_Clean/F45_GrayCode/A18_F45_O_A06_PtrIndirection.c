unsigned int GKE(unsigned int jip) {
    unsigned int rZn = 0;
    unsigned int dtU = jip >> 1;
    const unsigned int *VWyJ = &jip;
    for(int hj=0; hj<8; hj++) {
        unsigned char v = (*VWyJ >> (hj*4)) & 0xF;
        unsigned char qMVW = (dtU >> (hj*4)) & 0xF;
        rZn |= (unsigned int)(v ^ qMVW) << (hj*4);
    }
    return rZn;
}