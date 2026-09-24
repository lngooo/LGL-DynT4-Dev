int wX(unsigned int tC) {
    return (tC > 0 && __builtin_popcount(tC) == 1);
}