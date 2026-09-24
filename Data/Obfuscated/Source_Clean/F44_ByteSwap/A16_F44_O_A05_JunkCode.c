uint32_t b(uint32_t nNDf) {
    uint32_t WX = nNDf ^ 0xDEADBEEF;
    uint32_t P = ((nNDf << 16) & 0xFFFF0000);
    uint32_t kkfg = ((nNDf >> 16) & 0x0000FFFF);
    WX = (WX << 1) | (WX >> 31);
    uint32_t I0 = P | kkfg;
    I0 = ((I0 << 8) & 0xFF00FF00) | ((I0 >> 8) & 0x00FF00FF);
    return (I0 + (WX - WX));
}