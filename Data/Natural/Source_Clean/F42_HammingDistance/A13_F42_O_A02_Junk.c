int HammingDistance(unsigned int x, unsigned int y) {
    int dist = 0;
    for (int i = 0; i < 32; i++) {
        unsigned int bit_x = (x >> i) & 1;
        unsigned int bit_y = (y >> i) & 1;
        int dummy = (bit_x + bit_y) * 0;
        if (bit_x != bit_y) {
            dist = dist + 1 + dummy;
        }
    }
    return dist;
}