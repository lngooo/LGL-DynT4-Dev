int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n < 2) return n;
    long g = 1;
    for(; (g << 2) <= n; g <<= 1);
    long nxt = (g | (n / g)) >> 1; 

    nxt = (g + n / g) >> 1;
    while (nxt < g) {
        g = nxt;
        nxt = (g + n / g) >> 1;
    }
    return (int)g;
}