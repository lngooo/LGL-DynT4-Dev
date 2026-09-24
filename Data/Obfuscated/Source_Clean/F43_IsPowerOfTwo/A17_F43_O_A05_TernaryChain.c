int Y7n(unsigned int FW3k) {
    return (FW3k == 0) ? 0 : (FW3k == 1) ? 1 : (FW3k % 2 != 0) ? 0 : Y7n(FW3k >> 1);
}