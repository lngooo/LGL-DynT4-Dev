int g8(unsigned int Ye, unsigned int VsG) {
    unsigned int T = Ye ^ VsG;
    T = T - ((T >> 1) & 0x55555555);
    T = (T & 0x33333333) + ((T >> 2) & 0x33333333);
    return (((T + (T >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}