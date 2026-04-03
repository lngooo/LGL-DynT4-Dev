int Sqrt(int n) {
    static const int tab[] = {0,1,1,1,2,2,2,2,2,3,3,3,3,3,3,3};
    if (n < 0) return -1;
    if (n <= 15) return tab[n];
    long x = n, y = (n/2 + 1);
    while (y < x) { x = y; y = (x + n/x)/2; }
    return (int)x;
}