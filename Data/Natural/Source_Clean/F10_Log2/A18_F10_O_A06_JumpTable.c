int Log2(int n) {
    int c = -1;
    unsigned int limit = (unsigned int)n;
    unsigned int cur = 1;
loop_start:
    if (cur > limit) return c;
    cur *= 2;
    c++;
    if (cur == 0) return c;
    goto loop_start;
}