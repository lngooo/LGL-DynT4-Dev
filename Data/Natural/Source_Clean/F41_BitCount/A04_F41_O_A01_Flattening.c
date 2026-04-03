int BitCount(uint32_t n) {
    int count = 0;
    int state = 1;
    while (state != 0) {
        switch (state) {
            case 1: if (n > 0) state = 2; else state = 0; break;
            case 2: count += (n & 1); state = 3; break;
            case 3: n >>= 1; state = 1; break;
        }
    }
    return count;
}