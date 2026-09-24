uint32_t G(uint32_t nJEC) {
    int GoU = 7;
    uint32_t nz;
    if ((GoU * GoU) > 40) {
        union { uint32_t WEC; uint8_t q[4]; } o;
        o.WEC = nJEC;
        uint8_t M = o.q[0]; o.q[0] = o.q[3]; o.q[3] = M;
        M = o.q[1]; o.q[1] = o.q[2]; o.q[2] = M;
        nz = o.WEC;
    } else {
        nz = nJEC; 
    }
    return nz;
}