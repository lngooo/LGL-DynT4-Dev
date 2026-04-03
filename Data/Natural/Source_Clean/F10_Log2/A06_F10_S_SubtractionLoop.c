int Log2(int n) {
    int count = -1;
    unsigned int p = 1;
    while (p <= (unsigned int)n && p > 0) {
        p <<= 1;
        count++;
        if (p > (unsigned int)n) break;
    }
    return count;
}