uint32_t Ii(uint32_t tiP3) {
    return ((tiP3 & 0x000000FF) << 24) |
           ((tiP3 & 0x0000FF00) << 8)  |
           ((tiP3 & 0x00FF0000) >> 8)  |
           ((tiP3 & 0xFF000000) >> 24);
}