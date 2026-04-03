int GCD(int a, int b) {
    int x = 0, y = 1, lastx = 1, lasty = 0;
    a = abs(a); b = abs(b);
    while (b != 0) {
        int q = a / b;
        int r = a % b;
        a = b; b = r;
        int tmp = x; x = lastx - q * x; lastx = tmp;
        tmp = y; y = lasty - q * y; lasty = tmp;
    }
    return a;
}