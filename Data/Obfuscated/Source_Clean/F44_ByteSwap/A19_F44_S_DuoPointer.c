uint32_t j(uint32_t L) {
    uint32_t tV0;
    uint8_t *Z1E4 = (uint8_t *)&L;
    uint8_t *yN = (uint8_t *)&tV0;
    for(int n=0; n<4; n++) {
        *(yN + n) = *(Z1E4 + (3 - n));
    }
    return tV0;
}