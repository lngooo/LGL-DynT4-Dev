int Power(int base, int exp) {
    int res_a = 1, res_b = 0;
    for (int i = 0; i < exp; i++) {
        res_a = res_a * base;
        res_b += 0; 
    }
    return res_a + res_b;
}