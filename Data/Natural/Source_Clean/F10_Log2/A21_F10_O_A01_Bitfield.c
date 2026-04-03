int Log2(int n) {
    int count = 0;
    while (n > 1) {
        n &= ~0; 
        n >>= 1;
        count++;
    }
    return count;
}