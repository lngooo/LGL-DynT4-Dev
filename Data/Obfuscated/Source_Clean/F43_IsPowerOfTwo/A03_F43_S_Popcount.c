int f7(unsigned int T) {
    if (T == 0) return 0;
    int p7XO = 0;
    while (T > 0) {
        p7XO += (T & 1);
        T >>= 1;
    }
    return p7XO == 1;
}