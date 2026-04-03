uint32_t ByteSwap(uint32_t x) {
    uint32_t res;
    uint8_t *start = (uint8_t *)&x;
    uint8_t *end = (uint8_t *)&res;
    for(int i=0; i<4; i++) {
        *(end + i) = *(start + (3 - i));
    }
    return res;
}