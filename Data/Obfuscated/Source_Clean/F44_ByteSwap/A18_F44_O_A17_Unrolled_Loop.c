uint32_t j(uint32_t Wt) {
    uint32_t Y75 = 0;
    uint32_t lx;
    lx = (Wt >> 0) & 0xFF; Y75 |= (lx << 24);
    lx = (Wt >> 8) & 0xFF; Y75 |= (lx << 16);
    lx = (Wt >> 16) & 0xFF; Y75 |= (lx << 8);
    lx = (Wt >> 24) & 0xFF; Y75 |= (lx << 0);
    return Y75;
}