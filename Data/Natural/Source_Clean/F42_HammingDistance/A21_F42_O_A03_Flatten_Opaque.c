int HammingDistance(unsigned int x, unsigned int y) {
    unsigned int n = x ^ y;
    int count = 0;
    int state = 10;
    while (state != 0) {
        if (state == 10) {
            if (n != 0) state = 20; else state = 0;
        } else if (state == 20) {
            int z = 5;
            if ((z * z) > 0) { 
                n &= (n - 1);
                count++;
            }
            state = 10;
        }
    }
    return count;
}