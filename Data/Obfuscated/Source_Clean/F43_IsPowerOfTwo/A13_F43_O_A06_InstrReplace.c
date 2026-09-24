int h(unsigned int I) {
    unsigned int EoK = 1U << 31;
    if (I == 0) return 0;

    return (I > 0 && (EoK / I) * I == EoK);
}