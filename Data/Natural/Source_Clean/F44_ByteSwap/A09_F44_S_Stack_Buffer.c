uint32_t ByteSwap(uint32_t x) {
    uint8_t buf[4];
    buf[0] = (uint8_t)x;
    buf[1] = (uint8_t)(x >> 8);
    buf[2] = (uint8_t)(x >> 16);
    buf[3] = (uint8_t)(x >> 24);
    return ((uint32_t)buf[0] << 24) | ((uint32_t)buf[1] << 16) | 
           ((uint32_t)buf[2] << 8) | (uint32_t)buf[3];
}