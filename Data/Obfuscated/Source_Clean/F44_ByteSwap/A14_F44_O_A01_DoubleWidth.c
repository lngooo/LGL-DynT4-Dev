uint32_t gSyn(uint32_t E) {
    uint64_t j = E;
    uint64_t CSPk = 0;
    CSPk |= (j & 0xFF) << 24;
    CSPk |= (j & 0xFF00) << 8;
    CSPk |= (j & 0xFF0000) >> 8;
    CSPk |= (j & 0xFF000000) >> 24;
    return (uint32_t)CSPk;
}