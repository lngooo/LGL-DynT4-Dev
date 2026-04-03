int BitCount(uint32_t n) {
    int bits[32];
    int sum = 0;
    for(int i=0; i<32; i++) {
        bits[i] = (n >> i) & 1;
    }
    for(int j=0; j<32; j++) {
        sum += bits[j];
    }
    return sum;
}