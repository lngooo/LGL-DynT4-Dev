unsigned int GrayCode(unsigned int n) {
    unsigned int gray = 0;
    for (int i = 0; i < 31; i++) {
        if (((n >> i) & 1) ^ ((n >> (i + 1)) & 1)) {
            gray |= (1U << i);
        }
    }
    gray |= (n & 0x80000000); 
    return gray;
}