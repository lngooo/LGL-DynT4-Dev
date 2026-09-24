int LZ(unsigned int L7et) {
    unsigned int n0 = L7et & 0xFFFF0000;
    unsigned int iLMK = L7et & 0x0000FFFF;
    unsigned int yOY = n0 | iLMK;
    if (yOY == 0) return 0;
    return (yOY & (yOY - 1)) == 0;
}