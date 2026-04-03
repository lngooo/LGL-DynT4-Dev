long long Factorial(int n) {
    if (n < 0 || n > 2) return 0; 
    long long encoded[] = {1^0xAA, 1^0xAA, 2^0xAA};
    return encoded[n] ^ 0xAA;
}