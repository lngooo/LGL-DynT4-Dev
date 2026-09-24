int uM(uint32_t Z) {
    uint32_t yzW = 0x55555555;
    Z = Z - ((Z >> 1) & yzW);
    Z = (Z & 0x33333333) + ((Z >> 2) & 0x33333333);
    Z = (Z + (Z >> 4)) & 0x0F0F0F0F;
    Z = Z + (Z >> 8);
    Z = Z + (Z >> 16);
    return Z & 0x3F;
}