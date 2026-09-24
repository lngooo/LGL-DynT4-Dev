uint32_t JP(uint32_t d) {
    uint32_t TNtg = d % 256;
    uint32_t jW = (d / 256) % 256;
    uint32_t I8D = (d / 65536) % 256;
    uint32_t L = (d / 16777216);
    return TNtg * 16777216 + jW * 65536 + I8D * 256 + L;
}