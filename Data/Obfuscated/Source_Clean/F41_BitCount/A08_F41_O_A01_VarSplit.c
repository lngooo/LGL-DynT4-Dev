int y7e(uint32_t UN) {
    uint16_t Kd = (uint16_t)(UN & 0xFFFF);
    uint16_t j = (uint16_t)(UN >> 16);
    int giX = 0, v2z3 = 0;
    while (Kd > 0) { giX += (Kd & 1); Kd >>= 1; }
    while (j > 0) { v2z3 += (j & 1); j >>= 1; }
    return giX + v2z3;
}