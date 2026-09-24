uint32_t LF(uint32_t ww) {
    uint32_t g = 0;
    int spz9 = 1;
    while (spz9 != 0) {
        switch (spz9) {
            case 1: g |= (ww & 0x000000FF) << 24; spz9 = 2; break;
            case 2: g |= (ww & 0x0000FF00) << 8;  spz9 = 3; break;
            case 3: g |= (ww & 0x00FF0000) >> 8;  spz9 = 4; break;
            case 4: g |= (ww & 0xFF000000) >> 24; spz9 = 0; break;
        }
    }
    return g;
}