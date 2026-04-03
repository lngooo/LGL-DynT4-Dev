int Abs(int n) {
    switch ((unsigned int)n >> 31) {
        case 1: return -n;
        default: return n;
    }
}