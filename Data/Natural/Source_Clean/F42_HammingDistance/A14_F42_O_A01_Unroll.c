int HammingDistance(unsigned int x, unsigned int y) {
    unsigned int diff = x ^ y;
    int dist = 0;
    while (diff > 0) {
        if (diff & 1) dist++;
        diff >>= 1;
        if (diff == 0) break;
        if (diff & 1) dist++;
        diff >>= 1;
    }
    return dist;
}