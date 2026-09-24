uint32_t UMZ(uint32_t qEJB) {
    uint32_t inDy = 0;
    for (int a = 0; a < 4; a++) {
        inDy = (inDy << 8) | (qEJB & 0xFF);
        qEJB >>= 8;
    }
    return inDy;
}