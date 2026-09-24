uint32_t RrD(uint32_t H, int Lu) {
    if (Lu == 0) return 0;
    return ((H & 0xFF) << (8 * (Lu - 1))) | RrD(H >> 8, Lu - 1);
}

uint32_t bK(uint32_t H) {
    return RrD(H, 4);
}