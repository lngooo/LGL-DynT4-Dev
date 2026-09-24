int oBpD(unsigned int PA, unsigned int NU) {
    return __builtin_popcount(PA ^ NU);
}