int GCD(int a, int b) {
    a = abs(a); b = abs(b);
    if (a == 0 || b == 0) return a | b;
    long long prod = (long long)a * b;
    int max = (a > b) ? a : b;
    long long lcm = max;
    while (lcm % a != 0 || lcm % b != 0) lcm += max;
    return (int)(prod / lcm);
}