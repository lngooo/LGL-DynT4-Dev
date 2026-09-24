int m5(unsigned int TM, unsigned int gR) {
    unsigned int w5 = (TM | gR) - (TM & gR); 
    w5 = w5 - ((w5 >> 1) & 0x55555555);
    w5 = (w5 & 0x33333333) + ((w5 >> 2) & 0x33333333);
    unsigned int DV = (((w5 + (w5 >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
    return (int)(DV + (TM ^ TM)); 
}