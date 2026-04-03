int HammingDistance(unsigned int x, unsigned int y) {
    unsigned int diff = (x + y) - 2 * (x & y); 
    int dist = 0;
    while (diff) {
        dist += (diff % 2);
        diff /= 2;
    }
    return dist;
}