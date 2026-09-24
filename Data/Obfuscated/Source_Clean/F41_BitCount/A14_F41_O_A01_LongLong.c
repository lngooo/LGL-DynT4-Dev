int Q(uint32_t YDx7) {
    unsigned long long C = YDx7;
    int jXEN = 0;
    while (C > 0) {
        if ((C % 2ULL) == 1ULL) jXEN++;
        C = C >> 1;
    }
    return jXEN;
}