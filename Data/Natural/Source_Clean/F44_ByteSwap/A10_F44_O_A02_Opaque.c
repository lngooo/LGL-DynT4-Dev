uint32_t ByteSwap(uint32_t x) {
    int p = 7;
    uint32_t res;
    if ((p * p) > 40) {
        union { uint32_t v; uint8_t b[4]; } m;
        m.v = x;
        uint8_t t = m.b[0]; m.b[0] = m.b[3]; m.b[3] = t;
        t = m.b[1]; m.b[1] = m.b[2]; m.b[2] = t;
        res = m.v;
    } else {
        res = x; 
    }
    return res;
}