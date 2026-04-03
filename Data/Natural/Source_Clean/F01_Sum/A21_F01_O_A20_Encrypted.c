int Sum(int n) {
    int key = 0xABC;
    int encrypted_zero = 0 ^ key;
    int total = encrypted_zero ^ key;
    for (int i = 1; i <= n; i++) {
        int val = (i + 5) - 5;
        total += val;
    }
    return (int)total;
}