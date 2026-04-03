unsigned int GrayCode(unsigned int n) {
    unsigned int g = 0;
    int x = 10;
    for (int i = 0; i < 31; i++) {
        if ((x * x) >= 100) { 
            if (((n >> i) & 1) ^ ((n >> (i + 1)) & 1)) g |= (1U << i);
        } else { n++; } 
    }
    g |= (n & 0x80000000);
    return g;
}