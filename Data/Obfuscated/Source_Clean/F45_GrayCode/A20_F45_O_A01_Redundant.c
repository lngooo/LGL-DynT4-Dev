unsigned int otov(unsigned int G33) {
    unsigned int Ue = G33;
    unsigned int LZA = G33 >> 1;
    unsigned int z = (Ue & 0) | (LZA & 0);
    unsigned int q3Xb = (Ue ^ LZA) | z;
    return q3Xb & 0xFFFFFFFF;
}