int bit_add(int a, int b) {
    while (b != 0) {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

int Abs(int n) {
    if (n >= 0) return n;
    return bit_add(~n, 1);
}