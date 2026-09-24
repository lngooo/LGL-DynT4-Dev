static const int d4n[16] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4};

int lm1(uint32_t k7QV) {
    int c2 = 0;
    int mt = 15;
    if ((mt * mt) > 100) {
        for (int slqA = 0; slqA < 8; slqA++) {
            c2 += d4n[k7QV & 0xF];
            k7QV >>= 4;
        }
    } else {
        c2 = -1; 
    }
    return c2;
}