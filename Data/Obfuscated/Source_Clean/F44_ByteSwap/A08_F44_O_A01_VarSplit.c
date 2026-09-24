uint32_t lG(uint32_t NGD) {
    uint32_t uW9 = 0;
    uint32_t h2T = 0;
    uW9  |= (NGD & 0x000000FF) << 24;
    uW9  |= (NGD & 0x0000FF00) << 8;
    h2T |= (NGD & 0x00FF0000) >> 8;
    h2T |= (NGD & 0xFF000000) >> 24;
    return (uW9 | h2T);
}