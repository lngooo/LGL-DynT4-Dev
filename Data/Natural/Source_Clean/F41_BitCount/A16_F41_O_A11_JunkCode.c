int BitCount(uint32_t n) {
    int count = 0;
    uint32_t junk = 0xABCDE;
    for (int i = 0; i < 32; i++) {
        junk = (junk * 3) + i;
        if (n % 2 != 0) count++;
        n /= 2;
    }
    if (junk == 0) printf("%u", junk); 
    return count;
}