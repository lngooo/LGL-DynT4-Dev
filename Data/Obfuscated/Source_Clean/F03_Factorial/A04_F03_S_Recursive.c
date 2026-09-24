long long vA(int sQ8z) {
    if (sQ8z <= 0) return 1;
    return (long long)sQ8z * vA(sQ8z - 1);
}