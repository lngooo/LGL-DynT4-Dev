int qd(uint32_t xOIo) {
    xOIo = (xOIo & 0x55555555) + ((xOIo >> 1) & 0x55555555);
    xOIo = (xOIo & 0x33333333) + ((xOIo >> 2) & 0x33333333);
    xOIo = (xOIo & 0x0F0F0F0F) + ((xOIo >> 4) & 0x0F0F0F0F);
    xOIo = (xOIo & 0x00FF00FF) + ((xOIo >> 8) & 0x00FF00FF);
    xOIo = (xOIo & 0x0000FFFF) + ((xOIo >> 16) & 0x0000FFFF);
    return (int)xOIo;
}