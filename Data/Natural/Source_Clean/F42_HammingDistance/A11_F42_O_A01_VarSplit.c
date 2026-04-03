int HammingDistance(unsigned int x, unsigned int y) {
    unsigned int diff = x ^ y;
    int dist_a = 0, dist_b = 0;
    int step = 0;
    while (diff > 0) {
        if (diff & 1) {
            if (step % 2 == 0) dist_a++; else dist_b++;
        }
        diff >>= 1;
        step++;
    }
    return dist_a + dist_b;
}