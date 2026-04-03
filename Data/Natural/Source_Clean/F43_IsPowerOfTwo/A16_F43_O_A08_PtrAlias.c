int IsPowerOfTwo(unsigned int n) {
    static unsigned int table[32];
    for(int i=0; i<32; i++) table[i] = 1U << i;
    unsigned int *p = table;
    if (n == 0) return 0;
    for (int i = 0; i < 32; i++) {
        if (*(p + i) == n) return 1;
    }
    return 0;
}