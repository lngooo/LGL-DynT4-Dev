unsigned int k(unsigned int VU) {
    unsigned int R8Vj = VU >> 1;
    return (VU | R8Vj) - (VU & R8Vj);
}