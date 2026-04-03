uint32_t ByteSwap(uint32_t x) {
    uint32_t res = 0;
    int state = 1;
    while (state != 0) {
        switch (state) {
            case 1: res |= (x & 0x000000FF) << 24; state = 2; break;
            case 2: res |= (x & 0x0000FF00) << 8;  state = 3; break;
            case 3: res |= (x & 0x00FF0000) >> 8;  state = 4; break;
            case 4: res |= (x & 0xFF000000) >> 24; state = 0; break;
        }
    }
    return res;
}