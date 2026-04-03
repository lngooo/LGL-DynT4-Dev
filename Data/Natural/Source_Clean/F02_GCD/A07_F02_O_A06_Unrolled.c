int GCD(int a, int b) {
    a = abs(a); b = abs(b);
    if (!a || !b) return a | b;
    int s = 0;
    while (!((a&1)||(b&1))) { a>>=1; b>>=1; s++; }
    while (b) {
        while (!(b&1)) b>>=1;
        if (a > b) { int tmp = a; a = b; b = tmp; }
        b -= a;
    }
    return a << s;
}