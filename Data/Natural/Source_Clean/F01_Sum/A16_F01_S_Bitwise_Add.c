int bitwise_add(int a, int b) {
    while (b != 0) {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

int Sum(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total = bitwise_add(total, i);
    }
    return total;
}