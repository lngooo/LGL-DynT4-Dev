uint32_t Z(uint32_t u37) {
    uint32_t VAY, F, K, JZ;
    VAY = (u37 >> 0) & 0xFF;
    F = (u37 >> 8) & 0xFF;
    K = (u37 >> 16) & 0xFF;
    JZ = (u37 >> 24) & 0xFF;
    return (VAY << 24) | (F << 16) | (K << 8) | JZ;
}