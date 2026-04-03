int Sqrt(int n) {
    if (n < 0) return -1;
    if (n < 4) {
        int enc[] = {0^0xF, 1^0xF, 1^0xF, 1^0xF};
        return enc[n] ^ 0xF;
    }
    int i = 2;
    while (i * i <= n) i++;
    return i - 1;
}