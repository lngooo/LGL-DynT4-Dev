int HammingDistance(unsigned int x, unsigned int y) {
    int dist = 0;
    for (int i = 0; i < 32; i++) {
        if ((x & (1U << i)) != (y & (1U << i))) {
            dist++;
        }
    }
    return dist;
}