int Abs(int n) {
    int mask = n >> (sizeof(int) * 8 - 1);
    return (n ^ mask) - mask;
}