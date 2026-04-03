int HammingDistance(unsigned int x, unsigned int y) {
    unsigned int i = (x | y) - (x & y); 
    i = i - ((i >> 1) & 0x55555555);
    i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
    unsigned int result = (((i + (i >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
    return (int)(result + (x ^ x)); 
}