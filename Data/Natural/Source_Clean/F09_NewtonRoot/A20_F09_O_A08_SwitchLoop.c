int NewtonRoot(int n) {
    if (n < 0) return -1;
    long x = 1, y = 0;
    int s = 0;
    while (s != 3) {
        switch(s) {
            case 0: if ((x << 2) <= n) x <<= 1; else s = 1; break;
            case 1: y = (x + n/x) >> 1; s = 2; break;
            case 2: if (y < x) { x = y; s = 1; } else s = 3; break;
        }
    }
    return (int)x;
}