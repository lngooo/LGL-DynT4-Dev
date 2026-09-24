int k(int DuAh) {
    if (DuAh == -2147483648) return 2147483647; 
    if (DuAh >= 0) return DuAh;
    return (DuAh ^ 0xFFFFFFFF) + 1;
}