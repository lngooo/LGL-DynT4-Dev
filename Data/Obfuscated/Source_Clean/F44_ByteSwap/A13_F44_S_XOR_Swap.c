uint32_t Yjl(uint32_t aq1) {
    uint8_t *lA = (uint8_t *)&aq1;
    lA[0] ^= lA[3]; lA[3] ^= lA[0]; lA[0] ^= lA[3];
    lA[1] ^= lA[2]; lA[2] ^= lA[1]; lA[1] ^= lA[2];
    return aq1;
}