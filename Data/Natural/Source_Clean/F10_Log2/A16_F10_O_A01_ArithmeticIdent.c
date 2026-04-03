int Log2(int n) {
    int res = 0;
    unsigned int val = (unsigned int)n;
    while (val >= 2) {
        val = (val - (val % 2)) / 2;
        res++;
    }
    return res;
}