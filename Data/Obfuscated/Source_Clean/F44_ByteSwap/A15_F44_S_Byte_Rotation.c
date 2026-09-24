uint32_t K(uint32_t mA9) {
    uint32_t a = ((mA9 << 8) & 0xFF00FF00) | ((mA9 >> 8) & 0x00FF00FF);
    return (a << 16) | (a >> 16);
}