int GCD(int a, int b) {
    int x = abs(a), y = abs(b), g = 1, i = 2;
    if (!x || !y) return x | y;
    while (i <= (x < y ? x : y)) {
        ((x % i == 0) && (y % i == 0)) ? (g *= i, x /= i, y /= i) : (i++);
    }
    return g;
}