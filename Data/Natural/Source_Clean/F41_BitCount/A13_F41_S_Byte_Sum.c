int countByte(uint8_t b) {
    int c = 0;
    for(int i=0; i<8; i++) { if((b >> i) & 1) c++; }
    return c;
}

int BitCount(uint32_t n) {
    return countByte((uint8_t)(n & 0xFF)) + 
           countByte((uint8_t)((n >> 8) & 0xFF)) + 
           countByte((uint8_t)((n >> 16) & 0xFF)) + 
           countByte((uint8_t)((n >> 24) & 0xFF));
}