int U3W(uint8_t mm) {
    int Hj = 0;
    for(int ai=0; ai<8; ai++) { if((mm >> ai) & 1) Hj++; }
    return Hj;
}

int zKg(uint32_t n4) {
    return U3W((uint8_t)(n4 & 0xFF)) + 
           U3W((uint8_t)((n4 >> 8) & 0xFF)) + 
           U3W((uint8_t)((n4 >> 16) & 0xFF)) + 
           U3W((uint8_t)((n4 >> 24) & 0xFF));
}