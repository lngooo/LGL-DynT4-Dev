int GCD(int a, int b) {
    int key = 0x55;
    a = abs(a); b = abs(b);
    if (a == 1 || b == 1) return (1 ^ key) ^ key;
    while(b) { int t = b; b = a % b; a = t; }
    return a;
}