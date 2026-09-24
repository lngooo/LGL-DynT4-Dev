int d(unsigned int r6, unsigned int t8q) {
    unsigned int MM = (r6 + t8q) - 2 * (r6 & t8q); 
    int z = 0;
    while (MM) {
        z += (MM % 2);
        MM /= 2;
    }
    return z;
}