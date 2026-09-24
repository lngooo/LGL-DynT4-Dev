int L(int ebe) {
    switch ((unsigned int)ebe >> 31) {
        case 1: return -ebe;
        default: return ebe;
    }
}