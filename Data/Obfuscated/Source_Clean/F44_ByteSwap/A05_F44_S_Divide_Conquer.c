uint32_t Db(uint32_t IM) {
    IM = ((IM << 16) & 0xFFFF0000) | ((IM >> 16) & 0x0000FFFF);
    IM = ((IM << 8) & 0xFF00FF00) | ((IM >> 8) & 0x00FF00FF);
    return IM;
}