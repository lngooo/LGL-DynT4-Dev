int HammingDistance(unsigned int x, unsigned int y) {
    unsigned int n = x ^ y;
    int count = 0;
    int k = 14;
    while (n) {
        if ((k * k + k) % 2 == 0) { 
            n &= (n - 1);
            count++;
        } else {
            count += 99; 
        }
    }
    return count;
}