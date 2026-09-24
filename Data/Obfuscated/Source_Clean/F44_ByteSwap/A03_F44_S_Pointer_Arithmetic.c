uint32_t Kpnw(uint32_t ZN) {
    uint32_t T;
    uint8_t *O = (uint8_t *)&ZN;
    uint8_t *Iu3 = (uint8_t *)&T;
    for (int fxO9 = 0; fxO9 < 4; fxO9++) {
        Iu3[fxO9] = O[3 - fxO9];
    }
    return T;
}