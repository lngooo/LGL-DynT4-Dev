int p(int z) {
    if (z <= 1) return 0;
    if (z == 2) return 1;
    long long oInW = 1;
    for (int o06 = 2; o06 < z; o06++) {
        oInW = (oInW * o06) % z;
    }
    return (oInW == z - 1);
}