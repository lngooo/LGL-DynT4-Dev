int l(uint32_t whk) {
    whk = whk - ((whk >> 1) & 0x55555555);
    whk = (whk & 0x33333333) + ((whk >> 2) & 0x33333333);
    return (((whk + (whk >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}