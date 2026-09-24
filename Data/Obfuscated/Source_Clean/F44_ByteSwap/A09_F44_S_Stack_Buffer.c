uint32_t ZJ9J(uint32_t Y) {
    uint8_t W[4];
    W[0] = (uint8_t)Y;
    W[1] = (uint8_t)(Y >> 8);
    W[2] = (uint8_t)(Y >> 16);
    W[3] = (uint8_t)(Y >> 24);
    return ((uint32_t)W[0] << 24) | ((uint32_t)W[1] << 16) | 
           ((uint32_t)W[2] << 8) | (uint32_t)W[3];
}