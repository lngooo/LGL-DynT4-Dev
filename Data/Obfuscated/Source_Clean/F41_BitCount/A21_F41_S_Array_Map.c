int j5(uint32_t yVqp) {
    int JD[32];
    int kb = 0;
    for(int sjj=0; sjj<32; sjj++) {
        JD[sjj] = (yVqp >> sjj) & 1;
    }
    for(int y=0; y<32; y++) {
        kb += JD[y];
    }
    return kb;
}