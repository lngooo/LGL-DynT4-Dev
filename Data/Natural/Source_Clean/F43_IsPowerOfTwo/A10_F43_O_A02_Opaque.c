int IsPowerOfTwo(unsigned int n) {
    if (n == 0) return 0;
    int dummy = 10;
    while (n % 2 == 0) {
        if ((dummy * dummy) % 2 == 1) { 
            n += 777;
        }
        n /= 2;
    }
    return (n == 1);
}