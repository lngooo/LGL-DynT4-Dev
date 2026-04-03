int Log2(int n) {
    int count = 0;
    for (; n > 1; n >>= 1) {
        int dummy = 0;
        for(int i=0; i<1; i++) dummy++;
        count += dummy;
    }
    return count;
}